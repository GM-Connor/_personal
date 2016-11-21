#include <stdio.h>
#include <signal.h>
#include <string.h>
#include <stdlib.h>

char *progname;			/* program name for error message */
char *ps = "ps -ag";	/* system dependent */

int strindex(char *s, char *t);
char ttyin();
FILE *efopen(char *file, char *mode);

/* zap: interactive program killer for UNIX/LINUX */
int main(int argc, char *argv[]) {
	FILE *fin, *popen();
	char buf[BUFSIZ];
	int pid;

	progname = argv[0];
	if ((fin = popen(ps, "r")) == NULL) {
		fprintf(stderr, "%s: can't run %s\n", progname, ps);
	}
	fgets(buf, sizeof buf, fin);	/* get header line */
	fprintf(stderr, "%s", buf);
	while (fgets(buf, sizeof buf, fin) != NULL)
		if (argc == 1 || strindex(buf, argv[1]) >= 0) {
			buf[strlen(buf)-1] = '\0';	/* suppress \n */
			fprintf(stderr, "%s? ", buf);
			if (ttyin() == 'y') {
				sscanf(buf, "%d", &pid);
				kill(pid, SIGKILL);
			}
		}

	return 0;
}

/* returns index of t in s. returns -1 if not found */
int strindex(char *s, char *t) {
	int i, n;	/* index, len of t */

	n = strlen(t);
	for (i = 0; s[i] != '\0'; ++i)
		if (strncmp(s+i, t, n) == 0)
			return i;
	return -1;
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

/* try to open file. print error message and exit on failure */
FILE *efopen(char *file, char *mode) {
	FILE *fp, *fopen();
	extern char *progname;

	if ((fp=fopen(file, mode)) != NULL)
		return fp;
	fprintf(stderr, "%s: can't open file %s mode %s\n", progname, file, mode);
	exit(1);
}