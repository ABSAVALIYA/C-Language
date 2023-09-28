#include<stdio.h>
void main()
{
	int A, Power, Ans=1, i=1;
	
	printf("Enter a number: ");
	scanf("%d", &A);
	printf("Enter a number of power: ");
	scanf("%d", &Power);
	
	while(i<=Power){
	Ans = A * Ans;
	i++;	
	}
	printf("Answer is %d", Ans);
}
