#include <stdio.h>
#include <math.h>

void mergesort(int array[], int p, int r);
void merge(int array[], int p, int q, int r);

/* divide and conquer sort */
int main() {
	int array[] = {1,100,18,28,40,2,6,12,36,50};
	int p, q, r;

	p = 0;
	q = 4;
	r = 9;
	// merge(array, p, q, r);
	mergesort(array, p, r);

	for (int i=0; i < 10; ++i)
		printf("%d\n", array[i]);

	return 0;
}

void mergesort(int array[], int p, int r) {
	int q;
	if (r > p) {
		q = (p + r) / 2;
		mergesort(array, p, q);
		mergesort(array, q+1, r);
		merge(array, p, q, r);
	}
}

void merge(int array[], int p, int q, int r) {
	int i, j, k;					/* index */
	int n1 = q - p + 1;		/* length of array[p...q] */
	int n2 = r - q;			/* length of array[q+1...r] */
	int L[n1+1], R[n2+1];		/* left and right sub arrays */

	for (i = 0; i < n1; ++i)	/* copies subarray array[p...q] */
		L[i] = array[p + i];
	for (j = 0; j < n2; ++j)	/* copies subarray array[q+1...r] */
		R[j] = array[q + j + 1];

	L[n1] = INFINITY;
	R[n2] = INFINITY;

	i = j = 0;
	for (k = p; k <= r; ++k)
		if (R[j] > L[i])
			array[k] = L[i++];
		else
			array[k] = R[j++];
}