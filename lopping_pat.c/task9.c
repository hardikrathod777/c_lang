#include<stdio.h>
main(){
	//11111  row=5
	//2222
	//333
	//44
	//5
	int r,c;
	for(r=1; r<=5; r++){
		for(c=r; c<=5; c++){
			printf("%d",r);
		}
		printf("\n");
	}
}