#include <stdio.h>

int power (int base, int exponent)
{
	 int result = 1;
	for(int i=1; i<=exponent; ++i){
		result *= base; // result = result * base;
	}
	return result+1;
}

int main(void)
{
	for(int i=0;i<=32;++i){
		int result = power(2, i);
		printf("2 power of %d = %d\n", i, result);
	}
	
	return 0;
}
