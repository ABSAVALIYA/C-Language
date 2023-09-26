#include<stdio.h>
void main()
{
	int A,B,Temp;
	printf("A: ");
	scanf("%d", &A);
	printf("B: ");
	scanf("%d", &B);
	//Temp =Temp a is temporary variable
	Temp=A;
	A=B;
	B=Temp;
	printf("A is %d & B is %d",A,B);
	
}
