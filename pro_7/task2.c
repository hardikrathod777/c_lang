#include <stdio.h>

int calLength(char s[]){
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }
    return length;
}

main(){
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);

    int length = calLength(s);
    printf("Length of the string: %d\n", length);
}