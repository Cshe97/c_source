#include <stdio.h>

int main(void)
{
	int n1, n2, n3;
	scanf("%d %d %d", &n1, &n2, &n3);
	
	int max, mid, min;
	
	if(n1 > n2 && n1 > n3){
		max = n1;		if (n2 > n3){
			mid = n2;
			min = n3;
		} else{
			mid = n3;
			min = n2;
		}
	}
	if ( n2 > n1 && n2 > n3){
		max = n2;
		if (n1 > n3){
			mid = n1;
			min = n3;
		} else{
			mid = n3;
			min = n1;
		}
	}
	if (n3 > n1 && n3 > n2){
		max = n3;
		if (n1 > n2){
			mid = n1;
			min = n2;
		} else{
			mid = n2;
			min = n1;
		}
	}
	
	/*if (n1 > n2){
		if(n3 > n1)
			max = 3 mid = 1 min = 2
		else if(n3>n2)
			max = 1 mid = 3 min = 2
		else
			max = 1 mid = 2 min = 3
	
	} else {
		if(n3 > n2)
			max = 3 mid = 2 min = 1
		else if(n3 > n1)
			max = 2 mid = 3 min = 1
		else
			max = 2 mid = 1 min = 3
	}
	*/
	
	printf("max : %d\tmid : %d\tmin : %d\n", max, mid, min);
		
	return 0;
}
