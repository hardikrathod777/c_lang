#include<stdio.h>
main(){
	
	int a;
	
	printf("enter neutral value : ");
	scanf("%d", &a);
	
	if(a > 0){
		printf("%d is not neutral...", a);		
	}
	else if(a < 0){
		printf("%d is not neutral...", a);
	}
	else{
		printf("%d is neutral...", a);
	}
}