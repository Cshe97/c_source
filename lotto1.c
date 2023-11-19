#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	srand(time(NULL));
	int lotto[7] ={0};
	
	lotto[0] = rand()%45+1;
	for(int i=1; i<7; ++i){
		lotto[i] = rand()%45+1;
		for(int j=0; j<i; ++j){
			while(lotto[i] == lotto[j]){
				lotto[i] = rand()%45+1;
			}
		}
	}
	
	for(int i=0; i<5;++i){
		for(int j=i+1;j<6;++j){
			if(lotto[i] > lotto[j]){
				int tmp = lotto[i];
				lotto[i] = lotto[j];
				lotto[j] = tmp;
			}
		}	
	}
	
	printf("lotto number : ");
	for(int i=0; i<6; ++i){
		printf("%d ",lotto[i]);
	}
	printf("\n");
	printf("bonus number : %d\n", lotto[6]);
	
	return 0;
}
