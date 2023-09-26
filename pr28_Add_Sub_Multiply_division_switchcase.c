#include<stdio.h>
void main()
{
	float A, B, Ans;
	char C;
	
	printf("Enter A: ");
	scanf("%f", &A);
	printf("Enter B: ");
	scanf("%f", &B);
	printf("Enter choice: ");
	scanf("%f", &C);
	
	switch(C){
		case '+': Ans = A + B;
			printf("Answer is %0.2f", Ans);
		break;
		case '-': Ans = A - B;
			printf("Answer is %0.2f", Ans);
		break;
		case '*': Ans = A * B;
			printf("Answer is %0.2f", Ans);
		break;
		case '/': 
			if(B!=0){
			Ans = A / B;
			printf("Answer is %0.2f", Ans);
			}
			else if(B==0){
			printf("Invalid input");
			}
		break;
		default:printf("Invalid input");
	}
	
}
