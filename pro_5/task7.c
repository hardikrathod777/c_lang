#include <stdio.h>

main() {
    int size;

    printf("Enter the size of the square 2D array: ");
    scanf("%d", &size);

    int arr[size][size];

    printf("Enter the elements of the square 2D array:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int diagonalSum = 0;

    for (int i = 0; i < size; i++) {
        diagonalSum += arr[i][i];
    }

    printf("Sum of the main diagonal elements: %d\n", diagonalSum);
}
