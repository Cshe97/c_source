#include <stdio.h>

int main(void)
{
	int num;
	int isOdd;
	
	printf("num : ");
	scanf("%d", &num);
	
	isOdd = (num % 2 == 1);
	
	printf("%d is Odd -> %d\n", num, isOdd);
	
	
	return 0;
}
