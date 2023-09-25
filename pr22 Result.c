#include<stdio.h>
void main()
{
	int marks;
	
	printf("Enter marks: ");
	scanf("%d", &marks);
	
	if(marks<35){
		printf("Fail");
	}
	else if(marks>=35 && marks<45){
		printf("Pass class");
	}
	else if(marks>=45 && marks<60){
		printf("Second class");
	}
	else if(marks>=60 && marks<70){
		printf("First class");
	}
	else if(marks>=70 && marks<100){
		printf("Distinction");
	}
	
}
