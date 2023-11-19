#include <stdio.h>

int main(void)
{
	int a, b;
	a = 100;
	b = 200;
	printf("a : %d\tb : %d\n", a, b);
	
	//swap
	int tmp = a;
	a = b;
	b = tmp;
	
	
	printf("a : %d\tb : %d\n", a, b);
	
	return 0;
}
