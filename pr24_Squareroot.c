#include<stdio.h>
#include<math.h>
void main()
{
	float a, b, c, d, root1, root2, real_part, img_part;
	
	printf("Enter a: ");
	scanf("%f", &a);
	printf("Enter b: ");
	scanf("%f", &b);
	printf("Enter c: ");
	scanf("%f", &c);
	
	d = (b * b) - (4 * a * c);      // d=b^2-4ac
	
	if(d>0){
		root1 = (-b + sqrt(d)) / (2*a);
		root2 = (-b - sqrt(d)) / (2*a);
		printf("root 1 = %0.2f \nroot 2 = %0.2f", root1, root2);
	}
	else if(d==0){
		root1 = root2 = (-b) / 2*a;
		printf("root = %0.2f", root1);
	}
	else {
		real_part = (-b)/(2*a);
		img_part = sqrt(d)/(2*a);
		printf("root 1 = %0.2f + i%0.2f \nroot 2 = %0.2f - i%0.2f", real_part, img_part, real_part, img_part);
	}
	
}
