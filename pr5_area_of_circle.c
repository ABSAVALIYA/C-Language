#include<stdio.h>
void main(){
	float Pi = 3.14,Area; 
	int R;
	printf("Enter RAdius Of Circle: ");
	scanf("%d",&R);
	Area = Pi*R*R;
	printf("Area of circle is %0.2f", Area); 
}
