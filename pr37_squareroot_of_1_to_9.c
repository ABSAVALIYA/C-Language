#include<stdio.h>
#include<math.h>
void main()
{
	float i=0, root;
	
	do{
		root = sqrt(i);
		printf("%0.0f = %0.2f\n", i, root);
		i++;
		}
	while(i<=9);
	
}
