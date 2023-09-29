#include <stdio.h>
void main() 
{
    int num, sum=0, count=0;
    float average;

    printf("Enter numbers (enter -1 to stop): ");
    while (1) {
        scanf("%d", &num);
        if(num==-1){
            break;
        }
        sum=sum+num;
        count++;
    }
    average=(float)sum/count;
	printf("Sum: %d\n", sum);
    printf("Average: %0.2f\n", average);

}
