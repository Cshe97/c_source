#include <stdio.h>
#include "board.h"

int main(void)
{
	int frameScores[11] = {0, };
	int scores[11][3] = {0, };
	
	int bonus;		// 10 frame third cast.
	printBoard();
	for(int i = 1; i <= 10; ++i){
		// first cast
		printf("%d frame first cast : ", i);
		scanf("%d", &scores[i][1]);
		setScore(i, 1, scores[i][1]);
		printBoard();
	
		// score. print frameScore.
		// i-1 frame is spare
		if(i>=2 && scores[i-1][1]+scores[i-1][2]==10 && scores[i-1][1]!=10){
			frameScores[i-1] =frameScores[i-2] + 10 + scores[i][1];
			setFrameScore(i-1, frameScores[i-1]);
			printBoard();
		} 
		//i-2 frame, i-1 frame is strike
		else if(i>=3 && scores[i-2][1]==10 && scores[i-1][1]==10){
			frameScores[i-2] = frameScores[i-3] + 10 + (scores[i-1][1] + scores[i][1]);
			setFrameScore(i-2, frameScores[i-2]);
			printBoard();
		}	
		
		// second cast. 1~9 frame 1cast != 10 / 10 frame must be.
		if(scores[i][1] != 10 || i == 10){
			printf("%d frame second cast : ", i);
			scanf("%d", &scores[i][2]);
		//score. print frameScore.
			setScore(i, 2, scores[i][2]);
			printBoard();
		//i-1 frame strike
			if(i>=2 && scores[i-1][1] ==10){
				frameScores[i-1] = frameScores[i-2] + 10 + (scores[i][1] + scores[i][2]);
				setFrameScore(i-1, frameScores[i-1]);
				printBoard();
			}	
			// scores[i][1] + scores[i][2] < 10
			if(scores[i][1] + scores[i][2] < 10){
				frameScores[i] = frameScores[i-1] + scores[i][1] +scores[i][2];
				setFrameScore(i, frameScores[i]);
				printBoard();
			}
		}
		// bonus cast. 10frame third cast. frame == 10 && 10frame first + second >= 10
		
		if(i == 10 && scores[i][1] + scores[i][2] >= 10){
			printf("%d frame third cast : ", i);
			scanf("%d", &bonus);
			setScore(i, 3, bonus);
			printBoard();
			
			frameScores[i] = frameScores[i-1] + scores[i][1] + scores[i][2] + bonus;
			setFrameScore(i, frameScores[i]);
			printBoard();
		
		}
		//score. print frameScore.
	
	}
	
	return 0;
}
