#include <stdio.h>
main()
{
    int n ,a ,f;
    f = a = 1;
    printf("enter a Number you want to Find Factorial: ");
    scanf("%d",&n);
    for(f; a<=n; a++)
    {
		f*=a;
    }
    printf("The Factorial is : %d",f);
}