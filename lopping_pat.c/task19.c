#include<stdio.h>
main(){
	
	//1
	//01
	//101
	//0101
	//10101
	
	int r,c, n=1;
	
	for(r=1; r<=5; r++){
		for(c=1; c<=r; c++){
			printf("%d ", n);
			n++;
		}
		printf("\n");
	}
}
