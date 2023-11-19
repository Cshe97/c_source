#include <stdio.h>

int main(void)
{
	int *p;
	
	int num;
	int nums[5];
	
	p = &num;
	*p = 100;
	
	p = &nums[2];
	*p = 200;
	
	printf("%d\n",*p);
	
	return 0;
}
