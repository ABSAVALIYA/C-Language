#include<stdio.h>
void main()
{
	int a, n;
	printf("Enter a number: ");
	scanf("%d", &a);
	n=a%10;
	while(a>=10){
		a=a/10;
	}
	n=n+a;
	printf("%d", n);
	
}
