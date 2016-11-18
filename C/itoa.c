#include <stdio.h>
#define MAXLINE 1000

void itoa(int n, char s[]);
void reverse(char s[]);

/* int to string */
int main() {
	int n;				/* number */
	char s[MAXLINE];	/* string */

	n = -1309;
	itoa(n, s);
	printf("%s\n", s);

	return 0;
}

/* converts int n to characters in s[] */
void itoa(int n, char s[]) {
	int i, sign;	/* index, backup for n */

	if ((sign = n) < 0)
		n = -n;			/* make n positive */

	i = 0;
	do {
		s[i++] = (n % 10) + '0';
	} while ((n /= 10) > 0);

	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);	
}

/* reverses string in place */
void reverse(char s[]) {
	int i, j, len, c;	/* index, index, length, character */

	for(len = 0; s[len] != '\0'; ++len)		/* gets length of s[] */
		;

	for(i = 0, j = len-1; i < j; i++, j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}