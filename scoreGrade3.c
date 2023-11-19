#include <stdio.h>

int main(void)
{
	int score;
	printf("input score : ");
	scanf("%d", &score);
	
	switch( score / 10 ){
		case 10:	//A
		case 9:	//A
			printf("score : %d ----- grade : A\n", score);
			break;
		case 8:	//B
			printf("score : %d ----- grade : B\n", score);
		case 7:	//C
			printf("score : %d ----- grade : C\n", score);
			break;
		case 6:	//D
			printf("score : %d ----- grade : D\n", score);
			break;
		default : 	//5 4 3 2 1 0
			printf("score : %d ----- grade : F\n", score);
			
		
	}
	
	return 0;
}
