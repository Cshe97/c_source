#include <stdio.h>

int main(void)
{
	char code;
	printf("asc code : ");
	scanf("%c", &code);
	
	//printf("%d\n", code);
	
	int isTrue = 'A' <= code && code <= 'Z';
	printf("%c is a big letter : %d\n"	, code, isTrue);
	
	return 0;
}
