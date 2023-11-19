#include <stdio.h>

/*int gcd(int n1, int n2){
	int r = 1, gcd;
	while(r != 0){		
		r = n1 % n2;
		n1 = n2;
		n2 = r;
		if(r != 0){
			gcd = r;
		}	
	}
	return gcd;
	
}
*/

int gcd(int a, int b){
	int r;
	r = a%b;
	while (r!=0){
		a=b;
		b=r;
		r=a%b;
	}
	/*
	while(r=a%b){
		a = b;
		b = r;
	}
	*/
	return b;
}



int main(void)
{
	int a, b;
	printf("input num : ");
	scanf("%d %d", &a, &b);
	
	int result = gcd(a, b);
	
	
	printf("(%d, %d)'s gcd is %d\n", a, b, result);
	
	return 0;
}
