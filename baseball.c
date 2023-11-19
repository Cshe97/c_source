#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int question[3];
	// rand() -[1, 9] -> question array. unique num!
	srand(time(NULL));
	
	question[0] = rand() % 9 + 1;
	/*question[1] = rand() % 9 + 1;
	while (question[0] == question[1]){
		question[1] = rand() % 9 + 1;
	}
	question[2] = rand() % 9 + 1;
	while (question[2] == question[0] || question[2] == question[1]){
		question[2] = rand() % 9 + 1;
	}
	*/
	printf("question : %d %d %d\n", question[0], question[1], question[2]);
	
	//step2
	int strike=0;
	int ball=0;
	int count=0;
	while(strike != 3){
		//strike, ball, count ???
		int answer[3];
		printf("input nums : ");
		scanf("%d %d %d", &answer[0], &answer[1], &answer[2]); 
		strike = 0;
		ball = 0;
		
		for (int i = 0 ; i < 3; ++i){
			for (int j = 0; j < 3; ++j){
				if(question[i] == answer[j]){
					if(i == j){
						strike++;
					} else {
						ball++;
					}
				}		
			}
		}
		count++;
		
		//#strike, #ball and print 
		printf("strike : %d\tball : %d\n", strike, ball);
		printf("count : %d\n", count);	
	}
	//game over
	printf("game over \n");
	printf("your score : %d\n",count);
	
	return 0;
}
