#include<stdio.h>
void main()
{
	int P;
	float R, T, I, Total;
	
	printf("Enter principle Ammount: ");
	scanf("%d",&P);
	printf("Enter rate of interest: ");
	scanf("%f",&R);
	printf("Enter Time(In years): ");
	scanf("%f",&T);
	I=(P*R*T)/100;
	printf("Simple interest is %0.2f", I);
	Total = P+I;
	printf("Total ammount is %0.2f", Total);
	
}
