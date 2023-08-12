
#include <stdio.h>

main() {
    int r, c;

    for (r = 5; r >= 1; r--) {
        for (c = 1; c <= r; c++) {
            printf("%d", c);
        }

        for (c = 4; c >= r; c--) {
            printf(" ");
        }

        for (c = 4; c >= r; c--) {
            printf(" ");
        }

        for (c = r; c >= 1; c--) {
            printf("%d", c);
        }

        printf("\n");
    }

    for (r = 2; r <= 5; r++) {
        for (c = 1; c <= r; c++) {
            printf("%d", c);
        }

        for (c = 4; c >= r; c--) {
            printf(" ");
        }

        for (c = 4; c >= r; c--) {
            printf(" ");
        }

        for (c = r; c >= 1; c--) {
            printf("%d", c);
        }

        printf("\n");
    }

}
