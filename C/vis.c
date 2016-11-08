#include <stdio.h>
#include <ctype.h>
#define NO	0
#define YES	1

void vis(FILE *fp, int strip);

/* vis make funny characters visible (version 1) */
int main(int argc, char *argv[]) {
	int i, strip = NO;	/* index, strip (default) */
	FILE *fp;

	while (argc > 1 && argv[1][0] == '-') {
		switch(argv[1][1]) {
			case 's':	/* -s: strip funny chars */
				strip = YES;
				break;
			default:
				fprintf(stderr, "%s: unknown arg %s\n", argv[0], argv[1]);
				exit(1);
		}
		argc--;
		argv++;
	}
	if (argc == 1)
		vis(stdin, strip);
	else
		for (i = 1; i < argc; ++i)
			if ((fp=fopen(argv[i], "r")) == NULL) {
				fprintf(stderr, "%s: can't open %s\n", argv[0], argv[i]);
				exit(1);
			} else {
				vis(fp, strip);
				fclose(fp);
			}
	
	return 0;
}

/* make chars visible in FILE */
void vis(FILE *fp, int strip) {
	int c;	/* character */

	while ((c=getc(fp)) != EOF)
		if (isascii(c) && 
			(isprint(c) || c=='\n' || c=='\t' || c==' '))
			putchar(c);
		else if (!strip)
			printf("\\%03o", c);
}