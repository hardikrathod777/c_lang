#include <stdio.h>

int f(int n){
    if (n == 0 || n == 1) {
        return 1;
    } else{
        return n * f(n - 1);
    }
}

main(){
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("you enter wrong number.\n");
    } else {
        int r = f(num);
        printf("Factorial of %d is %d\n", num, r);
    } 
}