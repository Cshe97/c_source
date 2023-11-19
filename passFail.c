#include <stdio.h>

int main(void)
{
	int score;
	int isPass;
	
	printf("score : ");
	scanf("%d", &score);
	
	isPass = (score >= 60);
	
	printf(" %d    --->    %d\n",score, isPass); 
	
	
	
	return 0;
}
