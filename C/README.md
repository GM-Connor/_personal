# C directory

###CountingSort.c
sorts int array given fromArray, fromArray length, toArray, and max possible fromArray value. Sorts in linear time.
```c
void CountingSort(int A[], int A_len, int B[], int k);
```

###dateconv.c
can convert day of year to month and day. vice versa
```c
unsigned short dayOfYear(unsigned short year, unsigned char month, unsigned char day);
void monthDay(unsigned short year, unsigned short year_day, unsigned char *month, unsigned char *day);
```

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

### itoa.c
converts int n into characters in string s[].
```c
void itoa(int n, char s[]);
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

### QuickSort.c
sorts int array in place, given array, index of first element, and index of last element
```c
void QuickSort(int arr[], int p, int r);
```

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

### strend.c
returns 1 if string t occurs at end of string s, 0 otherwise
```c
int strend(char s[], char t[]);
```

### vis.c
converts funny characters in input to octal. Takes option `-s` which strips funny characters instead of converting
```c
void vis(FILE *fp, int strip);
```