#include <stdio.h>

void filecopy(FILE *infp, FILE *outfp);

int main() {
	int c;
	FILE *fp, *nfp;

	fp = fopen("words", "r");
	nfp = fopen("derps", "w");

	filecopy(fp, nfp);

	return 0;
}

/* filecopy: copy file ifp to file ofp */
void filecopy(FILE *ifp, FILE *ofp) {
	int c;	/* character */
	while ((c = getc(ifp)) != EOF)
		putc(c, ofp);
}