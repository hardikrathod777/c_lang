#include<stdio.h>
main(){
	
	int r,c,s;
	
	for(r=1;r<=5;r++){
		
		for(s=r; s>=2; s--){
			printf(" ");
		}
		for(c=r;c<=5;c++){
			printf("*");
		}
		printf("\n");
	}
}