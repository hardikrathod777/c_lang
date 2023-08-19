#include <stdio.h>

main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter the elements of the 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int colSums[cols];

    for (int j = 0; j < cols; j++) {
        colSums[j] = 0;
        for (int i = 0; i < rows; i++) {
            colSums[j] += arr[i][j];
        }
    }

    printf("Column-wise sums of the 2D array:\n");
    for (int j = 0; j < cols; j++) {
        printf("Column %d sum: %d\n", j + 1, colSums[j]);
    }
}
