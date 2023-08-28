#include <stdio.h>
main() {

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if ((num % 3 == 0) && (num % 5 == 0)) {
        both();
    } else {
        non();
    }
}

both(){
	printf("both");
}

non(){
	printf("non");
}