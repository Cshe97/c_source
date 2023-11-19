#include <stdio.h>

long long factorial(int n){
	long long result = 1LL;
	for(int i=1; i<=n; ++i){
		result *= i; //result = result * i;
	}
	
	return result;
}

int main(void)
{
	for(int i=0; i<= 100; ++i){
		long long result = factorial(i);
		
		printf("%d! = %lld\n", i, result);
	}
	
	
	return 0;
}
