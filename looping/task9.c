#include <stdio.h>
main()
{
    int n ,a ,f;
    f = a = 1;
    printf("enter a Number you want to Find Factorial: ");
    scanf("%d",&n);
    while(a<=n)
    {
        f*=a;
        a++;
    }
    printf("The Factorial is : %d",f);
}