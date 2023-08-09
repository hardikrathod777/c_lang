#include<stdio.h>
main(){
	
	//10101  54321
	//0101	 4321
	//101  	 321
	//01	 21
	//1	 	 1
	
	int r, c;
	
	for(r=5; r>=1; r--){
		for(c=r; c>=1; c--){
			if(c%2==0){
				printf("0");
			}else{
				printf("1");
			}
		}
		printf("\n");
	}
}