#include<stdio.h>
void main()
{
	float A, B, C, Avg;
	printf("Enter A: ");
	scanf("%f", &A);
	printf("Enter B: ");
	scanf("%f", &B);
	printf("Enter C: ");
	scanf("%f", &C);
	Avg = (A+B+C)/3;	
	printf("Average is %0.2f", Avg);
}
