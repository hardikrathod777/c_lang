#include<stdio.h>
main()
{
  int i,j;
  for(i=0;i<5;i++)
  {
    printf("\n");
    for(j=5-i;j<=5;j++)
    {
      printf("%d",j);
    }
  }
}