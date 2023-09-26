#include<stdio.h>
void main()
{
	int M, N;
	
	printf("Enter M: ");
	scanf("%d", &M);	
	printf("Enter N: ");
	scanf("%d", &N);	
	
	while(M<=N){
		if(M%2==0){
			printf("%d", M);
		}
		else{
			printf("\n");
		}
		M++;
	}
	
}
