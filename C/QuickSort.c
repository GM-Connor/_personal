#include <stdio.h>
#define swapArrayElement(type, arr, i, j)	\
				type tmp = arr[i];			\
				arr[i] = arr[j]; 			\
				arr[j] = tmp;

void QuickSort(int arr[], int p, int r);
int Partition(int arr[], int p, int r);

int main() {
	int i;	/* index */

	int arr[] = {3, 6, 13, 7, 78, 9, 1, 0, 3, 67, 2, 8, 3, 11};
	int p = 0;									/* index of first element */
	int r = (sizeof arr / sizeof arr[0])-1;		/* index of last element */

	QuickSort(arr, p, r);

	for (i = p; i <= r; ++i)	/* just printing the array */
		(i == p) ? printf("%d", arr[i]) : (i == r) ? printf(", %d\n", arr[i]) : printf(", %d", arr[i]);

	return 0;
}

void QuickSort(int arr[], int p, int r) {
	int q;	/* partition */
	if (p < r) {
		q = Partition(arr, p, r);
		QuickSort(arr, p, q-1);
		QuickSort(arr, q+1, r);
	}
}

int Partition(int arr[], int p, int r) {
	int x, i, j;	/* arr[r] (last element of subarray arr[p to r]), index, index */

	x = arr[r];		/* last element of arr[] */
	i = p - 1;		/* marks index where elements less than or equal to x end */

	for (j = p; j < r; ++j)
		if (arr[j] <= x) {
			i++;
			swapArrayElement(int, arr, i, j);
		}
	swapArrayElement(int, arr, i+1, r);
	return i+1;
}