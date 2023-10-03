#include <stdio.h>
int main()
{
    int N, a;
    printf("Enter a number: ");
    scanf("%d", &N);
    while (N != 0){
        a = N % 10;
        printf("%d& ", a);
        N = N / 10;
    }

}
