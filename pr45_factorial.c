#include<stdio.h>
void main()
{
	int N, i=1, Ans=1;
	
	printf("Enter a number: ");
	scanf("%d", &N);
	
	while(i<=N){
		Ans = Ans * i;
		i++;
	}
	printf("Answer is %d", Ans);
	
}
