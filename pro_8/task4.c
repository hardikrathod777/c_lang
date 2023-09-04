#include <stdio.h>

sLength(const char *s) {
    const char *p = s;

    while (*p != '\0') {
        p++;
    }

    return (int)(p - s);
}

main() {
    char iString[100];

    printf("Enter a string: ");
    scanf("%s", iString);

    int l = sLength(iString);

    printf("Length of the string : %d\n", l);

}