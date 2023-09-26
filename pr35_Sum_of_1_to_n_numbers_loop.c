#include<stdio.h>
void main()
{
	int N, i=1, sum=0;
	
	printf("Enter a number: ");
	scanf("%d", &N);
	
	while(i<=N){
		sum=sum+i;
		i++;
	}
	printf("%d", sum);
	
}
