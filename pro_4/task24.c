#include <stdio.h>

main() {
    int r = 5, s, d;

    for (int i = 1; i <= r; i++) {
      
        for (s = 1; s <= r - i; s++) {
            printf(" ");
        }

     
        for (d = r; d >= r - i + 1; d--) {
            printf("%d", d);
        }

        for (d = r - i + 2; d <= r; d++) {
            printf("%d", d);
        }

        printf("\n");
    }

}
