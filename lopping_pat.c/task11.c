#include<stdio.h>
main(){
  int i,j;
  for(i=1;i<=5;i++)
  {
     printf("\n");
     for(j=5-i+1;j>0;j--)
     {
       printf("%d",j);
     }
  }
}