#include<stdio.h>
void main()
{
	float Basic_salary, Gross_salary, HRA, DA;
	printf("Enter salary: ");
	scanf("%f", &Basic_salary);
	
	if(Basic_salary>=30000){
		HRA = Basic_salary * 0.3;
		DA = Basic_salary * 0.95;
	}
	else if(Basic_salary>=20000){
		HRA = Basic_salary * 0.25;
		DA = Basic_salary * 0.9;
	}
	 else if(Basic_salary>=10000){
		HRA = Basic_salary * 0.2;
		DA = Basic_salary * 0.8;
	}
	
	
	
	Gross_salary = Basic_salary + DA + HRA;
	
	printf ("Gross salary is %0.2f", Gross_salary);
	
}
