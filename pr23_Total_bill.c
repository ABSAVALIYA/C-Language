#include<stdio.h>
void main()
{
	float Units, Total_bill;
	printf("Enter Units: ");
	scanf("%f", &Units);
	
	if(Units<=50){
		Total_bill = Units * 0.50;
	}
	else if(Units>50 && Units<=150){
		Total_bill = (50 * 0.50) + ((Units-50) * 0.75); 
	}
	else if(Units>150 && Units<=250){
		Total_bill = (50 * 0.50) + (100 * 0.75) + ((Units-150) * 1.20); 
	}
		else if(Units>150 && Units<=250){
		Total_bill = (50 - 0.50) + (100 * 0.75) + (100 * 1.20) + ((Units - 250) * 1.50); 
	}
	
		Total_bill = (Total_bill + (Total_bill * 0.20));
		printf("Total bill is %0.2f", Total_bill);
	
}
