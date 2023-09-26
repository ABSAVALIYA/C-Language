#include<stdio.h>
void main()
{
	int S1, S2, S3;
	
	printf("Enter side 1: ");
	scanf("%d", &S1);
	printf("Enter side 2: ");
	scanf("%d", &S2);
	printf("Enter side 3: ");
	scanf("%d", &S3);
	
	if(S1==S2 && S2==S3){
		printf("Equiliteral triangle");
	}
	else if(S1==S2 || S2==S3 || S1==S3){
		printf("Isosceles triangle");
	}
	else if(S1*S1==S2*S2+S3*S3 || S2*S2==S1*S1+S3*S3 || S3*S3==S1*S1+S2*S2){
		printf("Right triangle");
	}
	else if(S1!=S2 && S2!=S3 && S3!=S1){
		printf("Scalene triangle");
	}
	
	
}
