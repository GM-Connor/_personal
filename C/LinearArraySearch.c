#include <stdio.h>

int LinearArraySearch(int arr[], int arrlen, int value);

/* find position of number in array */
int main() {
	int index;	/* index */
	int nums[] = {3,5,1,8,4,66,12,90,2,1,5,7,9,3,5,5,3,2};
	int length = sizeof(nums)/sizeof(nums[0]);
	int value = 5;

	index = LinearArraySearch(nums, length, value);
	printf("%d\n", index);

	return 0;
}

/* search for int value in array and return index or -1 if not found. */
int LinearArraySearch(int arr[], int arrlen, int value) {
	int i;	/* index */

	for (i=0; i<arrlen; ++i)
		if (arr[i] == value)
			return i;
	return -1;
}