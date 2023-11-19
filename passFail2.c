#include <stdio.h>

int main(void)
{
	int score;
	int isPass;
	
	printf("score : ");
	scanf("%d", &score);
	
	//isPass = (score >= 60);
	//printf(" %d    --->    %d\n",score, isPass); 
	
	if(score >= 60){//pass
		printf("score : %d -----> pass\n", score);
	}
	else{//fail
		printf("score : %d -----> fail\n", score);
	}
	
	
	
	return 0;
}
