#include <stdio.h>

int main(void)
{
	int fahr;
	int celsius;
	
	fahr = 100;
	//celsius = 5 / 9 * (fahr - 32);   no output
	
	//celsius = 5.0 / 9.0 * (fahr - 32);
	//=celsius = (int) 5.0 / 9.0 * (double)(fahr - 32);
	
	celsius = 5 * (fahr-32) / 9;  // fastest
	
	printf("fahr : %d ---> celsius : %d\n", fahr, celsius);
		
	return 0;
}
