#include<stdio.h>
main(){
	
	int n=1, a;
	
	printf("enter value you want : ");
	scanf("%d", &a);
	
	while(n <= a){
		
		printf("%d\n", n);
		n++;
	}
}