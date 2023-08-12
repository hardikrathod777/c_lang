#include<stdio.h>
main(){
	
	int r,c,s;
	
	for(r=5;r>=1;r--){
		
		for(s=r; s>=1; s--){
			printf("-");
		}
		for(c=5;c>=r;c--){
			printf("%d", r);
		}
		printf("\n");
	}
}