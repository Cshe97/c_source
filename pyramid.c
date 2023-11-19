#include <stdio.h>

int main(void)
{
	/*for (int i = 1; i <= 5; ++i){
		for (int j = 1; j <= 5-i; ++j){
			printf(" ");
		}
		for (int k = 1; k <= 2 * i -1; ++k){
			printf("*");
		}		
		printf("\n");
	}
	*/
	int x;
	scanf("%d", &x);
	
	for (int row =1; x>=row; ++row){
		for (int space = 1; x-row>=space; ++space)
			printf(" ");
		for (int star = 1; star <= 2*row-1; ++star)
			printf("*");
		printf("\n");
	}
	
	return 0;
}
