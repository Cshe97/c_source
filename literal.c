#include <stdio.h>

int main(void)
{
	printf("%d %d %d\n", 100, 0144, 0x64);
	printf("%d %o 0x%x\n", 100, 100, 100);
	
	printf("%d %d %d\n", 'A', 'a', '0');
	printf("%d %d %d\n", 'A', 'A'+1, 'A'+2);
	
	printf("%c %c %c\n", 65, 97, 48);
	printf("%c %c %c\n", 'A', 'a', '0');
	printf("%c %c %c\n", 'A', 'A'+1, 'A'+2);
	
	printf("%lldLL\n",100000000000LL);
	
	
	printf("%f %f\n", 3.14, 2.718F);
	printf("%s\n", "ABCD");
	
	return 0;
}
