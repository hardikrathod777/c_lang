#include <stdio.h>

main()
{
    int arr1[100], arr2[100];
    int i, n;
	   
       printf("enter the number in the array :");
       scanf("%d",&n);
   
       printf("enter %d elements in the array :\n",n);
       for(i=0;i<n;i++)
        {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }

    for(i=0; i<n; i++)
    {
        arr2[i] = arr1[i];
    }

    printf("\nthe first array :\n");
    for(i=0; i<n; i++)
    {
        printf("% 5d", arr1[i]);
    }

    printf("\n\nthe second array :\n");
    for(i=0; i<n; i++)
    {
        printf("% 5d", arr2[i]);
    }
	       printf("\n\n");
}
