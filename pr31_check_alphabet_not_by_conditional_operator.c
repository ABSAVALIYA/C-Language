#include<stdio.h>
void main()
{
	char C;
	
	printf("Enter: ");
	scanf("%c", &C);
	
	((C>='a' && C<='z') || (C>='A' && C<='Z'))?printf("Alphabet"):printf("Not alphabet");
	
}
