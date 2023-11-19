#include <stdio.h>

int main(void)
{
	char c;
	printf("input char : ");
	scanf("%c", &c);
	
	if(c>='A' && c<='Z'){
		printf("%c is a big Letter\n", c);
	}

	return 0;
}
