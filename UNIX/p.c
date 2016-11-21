#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define PAGESIZE	22
char *progname;		/* program name for error message */

FILE *efopen(char *file, char *mode);
void print(FILE *fp, int pagesize);
char ttyin();

/* p: print input in chunks */
int main(int argc, char *argv[]) {
	int i, pagesize = PAGESIZE;	/* index */
	FILE *fp, *efopen();

	progname = argv[0];
	if (argc > 1 && argv[1][0] == '-') {
		pagesize = atoi(&argv[1][1]);
		argc--;
		argv++;
	}
	if (argc == 1)
		print(stdin, pagesize);
	else
		for (i = 1; i < argc; ++i) {
			fp = efopen(argv[i], "r");
			print(fp, pagesize);
			fclose(fp);
		}

	return 0;
}

/* try to open file. print error message and exit on failure */
FILE *efopen(char *file, char *mode) {
	FILE *fp, *fopen();
	extern char *progname;

	if ((fp=fopen(file, mode)) != NULL)
		return fp;
	fprintf(stderr, "%s: can't open file %s mode %s\n", progname, file, mode);
	exit(1);
}

/* print fp in pagesize chunks */
void print(FILE *fp, int pagesize) {
	static int lines = 0;
	char buf[BUFSIZ];

	while (fgets(buf, sizeof buf, fp) != NULL)
		if (++lines < pagesize)
			fputs(buf, stdout);
		else {
			buf[strlen(buf)-1] = '\0';
			fputs(buf, stdout);
			fflush(stdout);
			ttyin();
			lines = 0;
		}
}

/* process response from /dev/tty */
char ttyin() {
	char buf[BUFSIZ];
	FILE *efopen();
	static FILE *tty = NULL;

	if (tty == NULL)
		tty = efopen("/dev/tty", "r");
	if (fgets(buf, BUFSIZ, tty) == NULL || buf[0] == 'q')
		exit(0);
	else	/* ordinary line */
		return buf[0];
}