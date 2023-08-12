
#include <stdio.h>

main()
{
    int i, j;
    
    for(i=6-1; i>=1; i--)
    {
        // Print trailing spaces
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        printf("*");

        // Print central spaces
        for(j=1; j<=((6 - i ) * 2 - 1); j++)
        {
            printf(" ");
        }

        printf("*");

        printf("\n");
    }

}