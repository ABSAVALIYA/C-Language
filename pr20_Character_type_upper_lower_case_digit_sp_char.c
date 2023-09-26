#include<stdio.h>
void main()
{
	char C;
	
	printf("Enter C: ");
	scanf("%c", &C);
	
	if(C>='A' && C<='Z'){
		printf("Upper case");
	}
	else if(C>='a' && C<='z'){
		printf("Lower case");
	}
	else if(C>=0 && C<=9){
		printf("Digit");
	}
	else{
		printf("Special character");
	}
	
}
