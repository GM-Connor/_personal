#include <stdio.h>
#define MAXLINE	1000

void reverseEscape(char to[], char from[]);

/* converts escaped characters like newline and tab into their character forms */
int main() {
	char msg[] = "Tab here\no\tk";
	char to[MAXLINE];

	reverseEscape(to, msg);

	printf("%s\n", to);

	return 0;
}

/* converts escaped newlines and tabs to character equivalents as it copies string from to string to */
void reverseEscape(char to[], char from[]) {
	int i, j;	/* indexes */

	i = j = 0;
	while (from[i] != '\0') {
		switch (from[i]) {
			case '\\':
				if (from[i+i] == 'n')
					to[j++] = '\n';
				else if (from[i+1] == 'b')
					to[j++] = '\b';
				else
					to[j++] = from[i];
				i++;
				break;
			default:
				to[j++] = from[i++];
				break;
		}
	}
	to[j] = '\0';
}