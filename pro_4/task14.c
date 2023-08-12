#include<stdio.h>
main(){
	
	int r, c, s;
	
	for(r=0; r<=4; r++){
		for(s=4; s>=r; s--){
			printf(" ");
		}
		for(c=5-r; c<=5; c++){
			printf("%d", c);
		}
		printf("\n");
	}
}