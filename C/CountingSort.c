#include <stdio.h>

void CountingSort(int A[], int A_len, int B[], int k);

int main() {
	int i;			/* index */
	int test_scores[] = {5, 5, 5, 9, 1, 0, 100, 12, 8, 12, 8, 90, 23, 67, 25, 88, 101};
	int tslen = sizeof test_scores / sizeof test_scores[0];	/* length of test scores */
	int k = 101;	/* max value allowed for test scores */
	int B[tslen];	/* array that test_scores will be sorted into */

	CountingSort(test_scores, tslen, B, k);

	for (i = 0; i < tslen; ++i)
		printf("%d%s", B[i], (i < tslen-1) ? ", " : "");
	printf("\n");
	return 0;
}

void CountingSort(int A[], int A_len, int B[], int k) {
	int C[k+1];					/* array for working */
	int i;						/* index */
	for (i = 0; i <= k; ++i)	/* initializes all elements of C[] to 0 */
		C[i] = 0;
	for (i = 0; i < A_len; ++i)	/* calculates frequency of each number appearing in A[] */
		C[A[i]]++;
	for (i = 1; i <= k; ++i)	/* sets C[i] to number of elements less than i, for each i in range [1,k] */
		C[i] += C[i-1];
	for (i = A_len-1; i >= 0; --i) {
		B[C[A[i]]-1] = A[i];
		C[A[i]]--;
	}
}