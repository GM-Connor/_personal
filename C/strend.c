#include <stdio.h>

int strend(char s[], char t[]);

int main() {
	char s[] = "I am a frog";

	char t1[] = "frog";
	char t2[] = "duck";

	printf("%d\n", strend(s, t1));
	printf("%d\n", strend(s, t2));

	return 0;
}

/* returns 1 if string t occurs at end of string s, 0 otherwise */
int strend(char *s, char *t) {
	int i = 2;		/* offset so that i == 0 when string t occurs at end of string s */
	while (*s++)
		;
	while (*t++)
		i++;
	while (i-- >= 0 && *--t == *--s)
		;
	return (i == 0) ? 1 : 0;
}