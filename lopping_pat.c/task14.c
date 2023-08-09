#include<stdio.h>
main(){
	
	int r,c;
	
	for(r=1; r<=5; r++){
		for(c=r; c<=5; c++){
			printf("*");
		}
		printf("\n");
	}
}