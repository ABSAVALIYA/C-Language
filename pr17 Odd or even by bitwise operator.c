#include<stdio.h>
void main()
{
	int N;
	printf("Enter a number: ");
	scanf("%d", &N);
	
	if(N & 1 == 1){
		printf("Odd");
	}
	else{
		printf("Even");
	}
	
}
