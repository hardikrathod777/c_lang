#include<stdio.h>
main(){
	
	int n, a;
	
	printf("enter value you want : ");
	scanf("%d", &n);
	
	for(a=1 ;n >= a; n--){
		
		printf("%d\n", n);
	}
}