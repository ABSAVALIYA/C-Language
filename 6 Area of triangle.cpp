#include<stdio.h>
int main()
{
	float S1, S2, Area;
	printf("Enter Side 1: ");
	scanf("%f",&S1);
	printf("Enter Side 2: ");
	scanf("%f",&S2);
	Area = S1*S2*1/2;
	printf("Area of the triangle is %0.2f", Area );
}
