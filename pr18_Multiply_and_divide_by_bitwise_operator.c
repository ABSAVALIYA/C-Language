#include<stdio.h>
void main()
{
	int N, M, D;
	printf("Enter a number: ");
	scanf("%d", &N);
	
	M = N << 1;
	D=N >> 1;
	
	printf("Multiplication : %d\n", M);
	printf("Divison        : %d", D);
	
}
