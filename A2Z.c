#include <stdio.h>

int main(void)
{
	int code;
	printf("asc code : ");
	scanf("%d", &code);
	
	int isTrue = 'A' <= code && code <= 'Z';
	printf("code : %d ---- Big Letter ASC code : %d\n"	, code, isTrue);
	
	return 0;
}
