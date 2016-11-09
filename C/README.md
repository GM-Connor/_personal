# C directory

###DivideConquerSort.c
sorts array of ints increasing using divide and conquer sort algorithm
```c
void mergesort(int array[], int p, int r);
```

### escape.c
converts newlines and tabs to escape sequences as it copies string `from[]` to string `to[]`
```c
void escape(char to[], char from[]);
```

### InsertionSort.c
sorts array of ints increasing given array and array length
```c
void InsertionSort(int arr[], int arrlen);
```

### InsertionSortReverse.c
sorts array of ints decreasing given array and array length
```c
void InsertionSortReverse(int arr[], int arrlen);
```

### LinearArraySearch.c
find position of int value in array. -1 if not found
```c
int LinearArraySearch(int arr[], int arrlen, int value);
```

### lower.c
converts char[] string to lowercase (ascii)
```c
void lower(char str[]);
```

### p.c
prints input in chunks
`p [%filenames%]`

### reverseEscape.c
converts escaped newlines and tabs to character equivalents as it copies string `from[]` to string `to[]`
```c
void reverseEscape(char to[], char from[]);
```

### squeeze.c
remove all characters in string1 that exist in string2
```c
void squeeze(char s1[], char s2[]);
```

### vis.c
converts funny characters in input to octal. Takes option `-s` which strips funny characters instead of converting
```c
void vis(FILE *fp, int strip);
```