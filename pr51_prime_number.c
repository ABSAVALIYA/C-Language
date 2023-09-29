#include<stdio.h>
void main()
{
	int N, i=2, Count=0;
	
	printf("Enter a number: ");
	scanf("%d", &N);
	
	for(i=2; i<=N/2; i++){
			if(N%i==0){
			Count =  1;
			break;
			}
		
		}
	if(Count==0){
		printf("Prime");
	}
	else{
		printf("Not prime");
	}

}
