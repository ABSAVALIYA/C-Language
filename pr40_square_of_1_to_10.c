#include<stdio.h>
#include<math.h>
void main()
{
	int i=1, Square;
	
	while(i<=10){
		Square = pow(i,2);
		
		printf("%d = %d\n", i, Square);
		i++;
	}
	
}
