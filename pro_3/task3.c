#include<stdio.h>
main(){
	
	int n, count=0;
	
	printf("enter any digit of number : ");
	scanf("%d", &n);
	
	for(count; n > 0; n=n/10){
//		n=n/10;
		count=count+1;
	}
	
	printf("sum of number in digit : %d",count);
}