#include "board.h"

int main(void)
{
	setScore(1, 1, 5);
	setScore(5, 1, 10);
	setScore(6, 1, 9);
	setScore(6, 2, 1);
	setScore(10, 1, 0);
	setScore(10, 2, 10);
	
	
	setFrameScore(1, 150);
	
	printBoard();
	
	
	return 0;
}
