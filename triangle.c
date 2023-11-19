#include <stdio.h>

int main(void)
{
	double height;
	double bottom;
	double area;
	
	//printf("height : ");
	//scanf("%lf", &height);
	//printf("base : ");
	//scanf("%lf", &bottom);
	scanf("%lf %lf", &height, &bottom);
	
	area = 1.0 / 2.0 * height * bottom;
	
	printf("area : %.2f\n", area);
	
	return 0;
}
