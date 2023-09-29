#include<stdio.h>
void main()
{
	int N, i=1, Factor=0;
	
	printf("Enter a number: ");
	scanf("%d", &N);
	
	while(i<=N){
		if(N%i==0){
			printf("%d\n", i);
			Factor=Factor+1;
		}
			i++;
	}
	printf("Total number of factors is: %d", Factor);
}
