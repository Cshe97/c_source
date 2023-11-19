#include <stdio.h>

int main(void)
{
	//initialized list
	int nums[10] = {50, 30, 100, 10, 20, 60, 40, 70, 90, 80 }; 
	int value;
	printf("input value : ");
	scanf("%d", &value);
	
	int i;
	for(i = 0; i < 10; ++i){
		if (value == nums[i]){
			break;
		}
	}
	
	if( i == 10){
		printf("%d is not found\n", value);
	} else {
		printf("%d is found index : %d\n", value, i);
	}
	
	return 0;
}
