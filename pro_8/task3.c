#include <stdio.h>

rArray(int *arr, int s) {
    int *start = arr; 
    int *e = arr + s - 1;

    while (start < e) {
        int t = *start;
        *start = *e;
        *e = t;

        start++;
        e--;
    }
}

main() {
    int n;

    printf("the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    int *p = arr;
    printf("Enter %d elements :\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", p + i); 
    }

    rArray(arr, n);

    printf("Reversed array elements : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(p + i)); 
    }
    printf("\n");

}