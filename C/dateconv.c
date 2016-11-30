#include <stdio.h>

unsigned char isLeapYear(unsigned short year);
unsigned short dayOfYear(unsigned short year, unsigned char month, unsigned char day);
void monthDay(unsigned short year, unsigned short year_day, unsigned char *month, unsigned char *day);

static unsigned char dayTab[2][13] = {
	{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

/* can convert day of year to month and day. vice versa */
int main() {
	unsigned char month, day;

	dayOfYear(1995, 3, 1);

	monthDay(1995, 61, &month, &day);

	printf("%d/%d/%d\n", month, day, 1995);

	return 0;
}



/* returns 1 if leap year, 0 otherwise */
unsigned char isLeapYear(unsigned short year) {
	return year%4 == 0 && year%100 != 0 || year%400 == 0;
}

/* returns day of year, given year, day, month */
unsigned short dayOfYear(unsigned short year, unsigned char month, unsigned char day) {
	unsigned char i, leap;

	leap = isLeapYear(year);
	for (i = 1; i < month; ++i)
		day += dayTab[leap][i];
	return day;
}

/* sets month and day given year, day of year, pointer to month, pointer to day */
void monthDay(unsigned short year, unsigned short year_day, unsigned char *pmonth, unsigned char *pday) {
	unsigned char i, leap;

	leap = isLeapYear(year);
	for(i = 1; year_day > dayTab[leap][i]; ++i)
		year_day -=  dayTab[leap][i];
	*pmonth = i;
	*pday = year_day;
}