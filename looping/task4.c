#include<stdio.h>
main(){
	
	int n, a=1;
	
	printf("enter value you want : ");
	scanf("%d", &n);
	
	while(n >= a){
		
		printf("%d\n", n);
		n--;
	}
}