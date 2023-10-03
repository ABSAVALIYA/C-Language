#include<stdio.h>
void main()
{
	int N, i=2, flag=0;
	
	printf("Enter a number: ");	
	scanf("%d", &N);
	
	while(i<=N/2){
			if(N%i==0){
			flag =  1;
			break;
			}
			i++;
		}
	if(flag==0){
		printf("Prime");
	}
	else{
		printf("Not prime");
	}

}
