#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	srand(time(NULL));
	int lotto[7] ={0};
	
	
	
	
	
	
	
	
	// create unique random number
	lotto[0] = rand()%45+1;
	for(int i=1; i<7; ++i){
		lotto[i] = rand()%45+1;
		for(int j=0; j<i; ++j){
			while(lotto[i] == lotto[j]){
				lotto[i] = rand()%45+1;
			}
		}
	}
	//array lotto selectsort
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
	printf("\n");
	
	
	
	
	
	//input my number
	printf("press number :");
	int mynum[6];
	for(int i=0; i<6; ++i){
		scanf("%d", &mynum[i]);
	}
	// my number selectsort
	for(int i=0; i<5; ++i){
		for(int j=i+1; j<6; ++j){
			if(mynum[i] > mynum[j]){
				int tmp = mynum[i];
				mynum[i] = mynum[j];
				mynum[j] = tmp;
			}
		}
	}
	printf("sorted mynum : ");
	// output mynumber
	for(int i=0; i<6; ++i){
		printf("%d ", mynum[i]);
	}
	printf("\n");
	
	
	
	
	
	
	
	
	int count = 0;
	int bonus = -5;
	for(int i=0; i<6; ++i){
		for(int j=0; j<6; ++j){
			if(lotto[i] == mynum[j])
				++count;
			if(lotto[6] == mynum[j])
				++bonus;
		}
	}
	//printf("bonus : %d\t", bonus);
	//printf("count : %d\n", count);
	
	switch(count){
		case 0:
			printf("Today is unlucky day :(\n");
		case 1:
			printf("you got %d !\n",count);
			break;
		case 2:
			printf("you got %d !\n",count);
			break;
		case 3:
			printf("you got	%d !\n",count);
			printf("5th\n");
			break;	
		case 4:
			printf("you got	%d !\n",count);
			printf("4th\n");
			break;
		case 5:
			if(count==5 && bonus==-5){
				printf("you got	%d !\n",count);
				printf("3rd\n");
				}
			else if(count==5 && bonus==1){
				printf("you got %d !\n",count);
				printf("but you got the bonus number\n");
				printf("2nd\n");
			}
			break;	
		case 6:
			printf("you got	%d !\n",count);
			printf("1st\n");
			break;			
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*printf("lotto number : ");
	for(int i=0; i<6; ++i){
		printf("%d ",lotto[i]);
	}
	printf("\n");
	printf("bonus number : %d\n", lotto[6]);
	*/
	return 0;
}
