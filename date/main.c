//#include <stdio.h>
#include "date.h"


int main(void)
{
	struct date today;
	today.year = 2023;
	today.month = 7;
	today.day = 7;
	
	struct date birthday = {2005, 8, 2};
	
	//struct date d;
	//d = today;
	
	//printf("(%d/%d/%d)\n",d.year, d.month, d.day);
	
	//printDate(today);
	//printDate(birthday);
	printDate(&today);
	printDate(&birthday);
	
	return 0;
}
