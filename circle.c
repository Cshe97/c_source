#include <stdio.h>
#define PI 3.14

int main(void)
{
	double radius;
	double area;
	
	printf("radius : ");
	scanf("%lf",&radius);
	
	area = PI * radius * radius;
	
	printf("area : %.2f\n",area);
	
	return 0;
}
