#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define FALSE	0
#define TRUE	1
typedef unsigned char Boolean;

char *progname;

/* converts input to uppercase/lowercase depending on option. prints original if no option */
int main(int argc, char *argv[]) {
	int c;
	Boolean lower = FALSE;
	Boolean upper = FALSE;

	progname = argv[0];

	while (--argc > 0 && (*++argv)[0] == '-')
		while (c = *++argv[0])
			switch(c) {
				case 'u':			/* uppercase */
					upper = TRUE;
					lower = FALSE;
					break;
				case 'l':			/* lowercase */
					lower = TRUE;
					upper = FALSE;
					break;
				default:			/* unknown */
					fprintf(stderr, "%s: unknown option %c\n", progname, c);
					argc = 0;
					break;
			}

	if (argc != 0) {
		fprintf(stderr, "Usage: %s [-u] [-l]\n", progname);
		exit(1);
	} else {
		while ((c = getchar()) != EOF)
			if (upper)
				putchar(toupper(c));
			else if (lower)
				putchar(tolower(c));
			else
				putchar(c);				/* no options. prints original */
	}
	return 0;
}