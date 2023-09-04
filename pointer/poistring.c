#include <stdio.h>

int main() {
    char a[11] = "helloworld";
    char *p[12];
    int i;

    p[0] = &a[0];

    for (i = 0; i + 1 < sizeof(a) / sizeof(a[0]) && p[i] != NULL; i++) {
        printf("%p  %c\n", (void *)p[i], *p[i]);
        p[i + 1] = &a[i + 1];
    }

    return 0;
}
