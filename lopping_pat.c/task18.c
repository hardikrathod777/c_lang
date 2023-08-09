#include<stdio.h>
main(){
	
	//1              1
	//10	         12
	//1010  	     123
	//10101	 		 1234
	//101010	 	 12345
	
	int r, c, n=1;
	
	for(r=1; r<=5; r++){
		for(c=1; c<=r; c++){
			if(c%2==0){
				printf("1");
			}else{
				printf("0");
			}
		}
		printf("\n");
	}
}