#include <stdio.h>

int main(void)
{
	int num;
	int isOdd;
	
	printf("num : ");
	scanf("%d", &num);
	
	//isOdd = (num % 2 == 1);
	//printf("%d is Odd -> %d\n", num, isOdd);
	
	if(num % 2 == 1){ //odd
		printf("%d is a odd\n", num);
	}
	else{ //even
		printf("%d is a even\n", num);
	}
	
	
	
	
	
	return 0;
}
