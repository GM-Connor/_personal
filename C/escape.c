#include <stdio.h>
#define MAXLINE	1000

void escape(char to[], char from[]);

/* converts characters like newline and tab into escape sequences like \n and \t */
int main() {
	char msg[] = "Tab here 	ok";
	char to[MAXLINE];

	escape(to, msg);

	printf("%s\n", to);

	return 0;
}

/* converts newlines and tabs to escape sequences as it copies string from to string to */
void escape(char to[], char from[]) {
	int i, j;	/* indexes */

	i = j = 0;
	while (from[i] != '\0') {
		switch (from[i]) {
			case '\n':
				to[j++] = '\\';
				to[j++] = 'n';
				i++;
				break;
			case '\t':
				to[j++] = '\\';
				to[j++] = 't';
				i++;
				break;
			default:
				to[j++] = from[i++];
				break;
		}
	}
	to[j] = '\0';
}