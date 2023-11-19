#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL)); //seed
	for (int i = 1; i <= 10; ++i){
		int num = rand() % 6 + 1;
		printf("num : %d\n", num);
	}
	
	return 0;
}
