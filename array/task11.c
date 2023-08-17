#include <stdio.h>

main()
{
   int i,n,a[100];
   
   printf("enter the number of array :");
   scanf("%d",&n);
   
   printf("enter %d number in the array :\n",n);
   for(i=0;i<n;i++)
      {
	  printf("element - %d : ",i);
	  scanf("%d",&a[i]);
	  }
      
   printf("\n\nThe values of array in reverse :\n");
   for(i=n-1;i>=0;i--)
      {
	   printf("% 5d",a[i]);
	  }
   printf("\n\n");
}