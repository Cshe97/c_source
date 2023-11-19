#include <stdio.h>

void printStrs( char *city[5], int index )
{
	for(int i = 0; i < index; ++i){
		printf("%s ", city[i]);
	}
	printf("\n");
}

int main(void)
{
	char *cities[] = {
		"Seoul", "Los Angelas", "Paris", "Moscow", "London"
	};
	
	printStrs(cities, 5);
}
