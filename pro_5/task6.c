#include <stdio.h>

main() {
    int r, c;

    printf("Enter the number of rows: ");
    scanf("%d", &r);

    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int matrix1[r][c], matrix2[r][c], result[r][c];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Resultant matrix after addition:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }


}