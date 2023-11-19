#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);
	/*int result;
	
	if(num >= 0){
		result = num;
	}
	else{
		result = -num;
	}*/
	
	int result = (num > 0) ? num : -num;

	printf("absolute value : %d\n", result);

	return 0;
}
