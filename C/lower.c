#include <stdio.h>

void lower(char str[]);

/* convert prints lowercase of uppercase */
main() {
	char str[] = "Hey there Man!";
	lower(str);
	printf("%s\n", str);
}

/* converts char[] to lowercase */
void lower(char s[]) {
	int i;	/* index */
	
	for (i=0; s[i]!='\0'; ++i)
		s[i] = (s[i] >= 'A' && s[i] <= 'Z') ? (s[i] + 'a' - 'A') : s[i];
}