#include<stdio.h>
void main()
{
	float Fer, Cel;
	printf("Enter tamperature in feranhit: ");
	scanf("%f", &Fer);
	Cel = ((Fer-32)*5/9);
	printf("The tamperature in celcius is %.1f", Cel);
	
}
