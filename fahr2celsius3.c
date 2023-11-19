#include <stdio.h>

int main(void)
{
	int fahr;
	fahr = 100;
	
	int celsius1000 = 1000 * 5 * (fahr - 32) / 9;
	
	
	int left = celsius1000 / 1000;
	//int right = (celsius1000 - celsius1000 / 1000 * 1000 + 5) / 10;
	int right = (celsius1000 % 1000 + 5) / 10;
	
	
	//left = 5 * (fahr - 32) / 9;
	//right = 5 * 100 * (fahr - 32) / 9 - 3000;
	
	printf("fahr : %d ----> celsius : %d.%d\n", fahr, left, right);
	
	return 0;
}
