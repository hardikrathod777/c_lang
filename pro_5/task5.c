#include <stdio.h>

main() {
    int r, c;

    printf("Enter the number of rows: ");
    scanf("%d", &r);

    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int arr[r][c];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int largest = arr[0][0];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (arr[i][j] > largest) {
                largest = arr[i][j];
            }
        }
    }

    printf("The largest number in the array is: %d\n", largest);

}