#include<stdio.h>
main(){
	
	int i,j,n,n2;
	int arr[i][j];
	
	printf("enter number of row : ");
	scanf("%d", &n);
	
	printf("enter number of col : ");
	scanf("%d", &n2);
	
	printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n2; j++){
        	scanf("%d", &arr[i][j]);
		}
		printf("\n");
    }
	
	
}