#include <stdio.h>

int main(void)
{
	int size;
	printf("input size : ");
	scanf("%d", &size);
	
	int array[size];
	
	for(int i = 0; i < size; ++i){
		array[i] = i + 1;
	}
	for(int i = 0; i < size; ++i){
		printf("%d ", array[i]);
	}
	printf("\n");
	
	return 0;
}
