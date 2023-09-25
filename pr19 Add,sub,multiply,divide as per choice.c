#include<stdio.h>
void main()
{
	
	float A, B, Ans;
	char Choice;
	
	printf("Enter A: ");
	scanf("%f", &A);
	printf("Enter B: ");
	scanf("%f", &B);
	
	printf("Enter Choice: ");
	scanf(" %c", &Choice);
	
		if(Choice == '+'){
		Ans = A + B;	
		printf("Answer is %0.2f", Ans);
		}
		else if(Choice == '-'){
		Ans = A-B;	
		printf("Answer is %0.2f", Ans);
		}
		else if(Choice == '*'){
		Ans = A*B;	
		printf("Answer is %0.2f", Ans);
		}
		else if(Choice == '/'){
			if(B==0){
				printf("Invalid input");
			}
			else{
				Ans = A/B;
				printf("Ans is %0.2f", Ans);
			}
		}
		else{
			printf("Invalid input");
		}
}
