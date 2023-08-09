#include<stdi.h>
main(){
	
	//1		-
	//01	|-
	//101	-|-
	//0101	|-|-
	//10101	-|-|-
	
	int r,c, n=1;
	
	for(r=1; r<=5; r++){
		for(c=1; c<=r; c++){
			if(n%2==0){
				printf("-");
			}else{
				printf("|");
			}
			n++;
		}
		printf("\n");
	}
}
