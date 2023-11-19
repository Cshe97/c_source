#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	printf("argc : %d\n", argc);
	for (int i = 0; i < argc; ++i){
		printf("argv[%d] : %s\n", i, argv[i]);
	}
	
	if(argc != 3){
		fprintf(stderr, "[usage] ./add 100 200\n");
		return 1;
	}
	
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	
	printf("%d\n", a + b);

	return 0;
}
