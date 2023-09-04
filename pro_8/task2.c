#include <stdio.h>

main() {
    int n;

    printf("the number of elements in the array : ");
    scanf("%d", &n);

    int arr[n];

    int *p = arr;
    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }
    
    printf("Array elements : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");

}