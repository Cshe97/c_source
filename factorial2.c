#include <stdio.h>

long long factorial(int n)
{
	if(n == 1){
		return 1LL;
	} else{
		return n * factorial(n-1);
	}
}

int main(void)
{
	long long result = factorial(5);
	
	printf("result : %lld\n", result);
	
	return 0;
	
}
