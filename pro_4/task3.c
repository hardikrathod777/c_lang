#include<stdio.h>
main()
{
  int i,j;
  for(i=5;i>=1;i--)
  {
    printf("\n");
    for(j=5;j>=i;j--)
    {
      printf("%d",(j));
    }
  }
}