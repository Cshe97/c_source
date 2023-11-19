#include <stdio.h>

int main(void)
{
	int man, woman;
	
	scanf("%d %d", &man, &woman);
	
	
	//double manRatio	= 100.0 * man / (man + woman);
	//double womanRatio = 100.0 * woman / (man + woman);
	
	//double manRatio	= 1.0 * man / (man + woman) * 100;
	//double womanRatio = 1.0 * woman / (man + woman) * 100;
	
	double manRatio	= (double) man / (man + woman) * 100;
	double womanRatio = (double) woman / (man + woman) * 100;
	
	
	printf("manRatio : %.2f%% \nwomanRatio : %.2f%%\n", manRatio, womanRatio);
		
	return 0;
}
