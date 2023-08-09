#include<stdio.h>
main(){
	char n='A';
	int r,c;
	
	for(r=1; r<=5; r++){
		for(c=1; c<=r; c++){
			printf("%c ", n);
			n++;
		}
		printf("\n");
	}
}
