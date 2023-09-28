#include <stdio.h>

int main() {
    int i, n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        if (i % 2 == 0) {
            sum = sum - i;
        } else {
            sum = sum + i;
        }
    }

    printf("The sum of the series is %d\n", sum);

    return 0;
}

