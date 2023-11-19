#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int num[45] = {0};
	int i = 0;
	int r = rand() % 45 + 1;
	//1
	for( i = 0; i < 45; ++i){
		num[i] = 1;
	}
	
	int lotto[7]= {0};
	
	
	for(int j = 0; j < 7; ++j){
	//2
		r = rand() % 45 + 1;
	//3	
		if(j == 0){		
			lotto[j] = r;
	//4	
			num[r-1] -= 1;
		}
	//5
		else{
			lotto[j] = r;
			while(num[r-1] != 1){
				r = rand() % 45 + 1;
				lotto[j] = r;
			}
			num[r-1] -= 1;
		}	
		
		printf("r : %d\n", r);	
		printf("lotto[%d] : %d\n", j, lotto[j]);
		printf("num[%d] : %d\n", r-1, num[r-1]);
	}
	
	int count = 0;
	for(int i=0; i<45; ++i){
		printf("%d ",num[i]); 
		if(num[i] == 0)
			++count;
	}
	printf("\n");
	printf("%d",count);
	printf("\n");
	
	for (int k = 0; k < 5; ++k){
		for( int i = k+1; i<6; ++i){	
			if(lotto[k] > lotto[i]){
				int tmp = lotto[k];
				lotto[k] = lotto[i];
				lotto[i] = tmp;
			}
		}
	}
	
	for(int i = 0; i < 7; ++i){
		printf("%d ", lotto[i]);
	}
	
	
	printf("\n");
	return 0;
}
