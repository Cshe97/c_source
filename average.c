#include <stdio.h>

int main(void)
{
	//double korean, math, english;
	int korean, math, english;
	double sum, avg;
	
	/*printf("korean : ");
	scanf("%lf", &korean);
	printf("math : ");
	scanf("%lf", &math);
	printf("english : ");
	scanf("%lf", &english);*/
	
	printf("input korean math english : ");
	scanf("%d %d %d", &korean, &math, &english);
	
	sum = korean + math + english;
	//avg = (korean + math + english) / 3.0;
	avg = (double)sum / 3.0;
	
	printf("sum: %.2f\taverage : %.2f\n",sum, avg);
		
	return 0;
}
