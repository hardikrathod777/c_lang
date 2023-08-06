#include<stdio.h>
main(){
	
	int n, a;
	
	printf("enter value you want : ");
	scanf("%d", &a);
	
	for(n=1 ;n <= a; n=n+2){
		printf("%d\n", n);
	}
}