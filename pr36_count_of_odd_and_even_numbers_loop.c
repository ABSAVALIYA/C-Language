#include<stdio.h>
void main()
{
	int N, i=1, odd=0, even=0;
	
	while(i<=10){
		
		printf("Enter N: ");
		scanf("%d", &N);
			if(N%2==0){
				even=even+1;
			}
			else{
				odd=odd+1;
			}
			i++;
	}
	printf("Odd  = %d\n", odd);
	printf("Even = %d", even);
	
}
