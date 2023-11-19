#include <stdio.h>

int main(void)
{
	for(int i = 1; i <= 5; ++i){
		for(int j = 1; j <= 5; ++j){
			if( j == i || j == 6 - i){
				printf("*");
			} else{
				printf(" ");
			}
			//printf("%c", (j == i || j == 6 - i) ? "*" : " ");
		}
	printf("\n");
	}	
	1
	return 0;
}
