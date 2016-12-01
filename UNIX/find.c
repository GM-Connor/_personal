#include <stdio.h>
#include <string.h>
#define MAXLINE 1000	/* maximum input line length */

int getnextline(char *line, int max);

/* find: print lines matching pattern from first argument */
int main(int argc, char *argv[]) {
	char line[MAXLINE];								/* holds current line */
	unsigned long lineno = 0, found = 0;			/* line number, num of lines matched */
	int c;											/* character */
	unsigned char except = 0, number = 0;			/* inversion, print line num */

	while (--argc > 0 && (*++argv)[0] == '-')
		while(c = *++argv[0])
			switch(c) {
				case 'x':
					except = 1;
					break;
				case 'n':
					number = 1;
					break;
				default:
					fprintf(stderr, "find: illegal option %c\n", c);
					argc = 0;
					found = -1;
					break;
			}

	if (argc != 1)
		fprintf(stderr, "Usage: find [-x] [-n] %%pattern%%\n");
	else
		while(getnextline(line, MAXLINE) > 0) {
			lineno++;
			if ((strstr(line, *argv) != NULL) != except) {
				if (number)
					fprintf(stdout, "%ld: ", lineno);
				fprintf(stdout, "%s", line);
				found++;
			}
		}

	return found;
}

/* get line into s, return length */
int getnextline(char *s, int lim) {
	int c, i;	/* character, index */

	i = 0;
	while (--lim > 0 && (c=getchar()) != EOF && c != '\n')
		s[i++] = c;
	if (c == '\n')
		s[i++] = c;
	s[i] = '\0';
	return i;
}