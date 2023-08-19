#include <stdio.h>

main() {
    int r, c;

    int exampleArray[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    r = sizeof(exampleArray) / sizeof(exampleArray[0]);
    c = sizeof(exampleArray[0]) / sizeof(exampleArray[0][0]);

    printf("Number of rows: %d\n", r);
    printf("Number of columns: %d\n", c);

}
