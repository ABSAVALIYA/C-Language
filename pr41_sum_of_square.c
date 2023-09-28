#include<stdio.h>
void main()
{
	int N, i=1, Square, Sum=0;
	
	printf("Enter a number: ");
	scanf("%d", &N);
	
	while(i<=N){
		Square = pow(i,2);
		Sum = Sum + Square;
		i++;
	}
	printf("%d\n", Sum);
}
