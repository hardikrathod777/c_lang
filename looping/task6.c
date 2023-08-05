#include<stdio.h>
main(){
	
	int n, a=0;
	
	printf("enter value you want : ");
	scanf("%d", &a);
	
	while(a >= n){
		printf("%d\n", a);
		a=a-2;
	}
}