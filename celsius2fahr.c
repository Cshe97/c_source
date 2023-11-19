#include <stdio.h>

int main(void)
{
	double celsius;
	// = 36;
	scanf("%lf", &celsius);
	
	double fahr = (celsius * 1.8) + 32;
	
	printf("celsius : %.1f -----> fahr : %.2f\n", celsius, fahr);
	
	
	return 0;
}
