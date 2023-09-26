#include<stdio.h>
void main()
{
	int N, Year;
	
	printf("Enter a number 1-12: ");
	scanf("%d", &N);
	
	switch(N){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:printf("31 days");
		break;
		case 4:
		case 6:
		case 9:
		case 11:printf("30 days");
		break;
		case 2:printf("By default you have to enter year: ");
				scanf("%d", &Year);
				if(Year%4==0){
					printf("29 days");
				}
				else{
					printf("28 days");
				}
		break;
		default:printf("Invalid input");
	}
	
}
