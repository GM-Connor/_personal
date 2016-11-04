#include <stdio.h>

void InsertionSortReverse(int arr[], int arrlen);

/* sorts array of numbers %nums% of length %x% */
void main() {
	int i;	/* index */
	int nums[] = {3,5,1,8,4,66,12,90,2,1,5,7,9,3,5,5,3,2};
	int length = sizeof(nums)/sizeof(nums[0]);

	InsertionSort(nums, length);

	for (i=0; i<length; ++i)
		printf("%d\n", nums[i]);

}

/* sorts array in place given array and array length */
void InsertionSortReverse(int arr[], int arrlen) {
	int i, j;	/* indexes */
	int key;	/* current array value */

	for (j=1; j<arrlen; ++j) {
		key = arr[j];
		for (i=j-1; i>=0 && arr[i]<key; --i)
			arr[i+1] = arr[i];
		arr[i+1] = key;
	}
}