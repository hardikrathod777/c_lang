
#include <stdio.h>

int main()
{
    int i, j;

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", (i-j+1));
        }

        printf("\n");
    }
    for(i=1;i<=4;i++)
  	{
     
     for(j=4-i+1;j>0;j--)
     {
       printf("%d",j);
     }
     printf("\n");
  }
}