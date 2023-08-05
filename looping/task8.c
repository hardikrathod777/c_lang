#include <stdio.h>
main() {
    int n, a, sum = 0;
    printf("Enter a value you want : ");
    scanf("%d", &n);
    a = 1;

    while (a <= n) {
        sum += a;
        ++a;
    }

    printf("Sum = %d", sum);
}
