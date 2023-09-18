#include<stdio.h>
void main()
{
	int A, B, C;
	printf("Enter A: ");
	scanf("%d", &A);
	printf("Enter B: ");
	scanf("%d", &B);
	printf("Enter C: ");
	scanf("%d", &C);
	
	if(A>B)
	{
		if(A>C)
		{
		printf("A is Largest");
		}
		else
		{
		printf("C is largest");
		}
	}
	else
	{
		if(B>C)
		{
		printf("B is largest");
		}
		else
		{
		printf("C is largest");
		}
	}
	
}



