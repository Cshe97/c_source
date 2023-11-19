#include <stdio.h>

int main(void)
{
	int a, b, c;
	
	a = 100;
	b = a;
	c = a + b;
	
	printf("%d %d %d \n", a, b, c);
	
	c = 100;
	a = b = c = 100;
	
	printf("%d %d %d \n", a, b, c); //daisy-chain form
	
	return 0;
}
