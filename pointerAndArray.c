#include <stdio.h>

int main(void)
{
	int nums[5] = {1, 2, 3, 4, 5};
	int *p;
	p = nums;  // p = &nums[0];
	
	printf("*p : %d\n", *p);
	
	++p;
	printf("*p : %d\n", *p);
	
	p=nums;
	printf("*(p + 0) : %d\n", *(p + 0));
	printf("*(p + 1) : %d\n", *(p + 1));
	printf("*(p + 2) : %d\n", *(p + 2));
	printf("*(p + 3) : %d\n", *(p + 3));
	printf("*(p + 4) : %d\n", *(p + 4));
	
	return 0;
}
