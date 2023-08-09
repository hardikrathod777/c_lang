#include<stdio.h>
main(){
  //54321
  //5432
  //543
  //54
  //5
  int r,c;
  for(r=1; r<=5; r++){
  	
  		for(c=5; c>=r; c--){
  				printf("%d", c);
		  }
  	printf("\n");
  }
}