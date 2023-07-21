#include<stdio.h>
main(){
	
	int gs, bs;
	float hra,da,ta;
	
	printf("enter base salary : ");
	scanf("%d", &bs);
	
	hra=bs*10/100;
	da=bs*5/100;
	ta=bs*8/100;
	
	gs=bs+hra+da+ta;
	
	printf("gross salary is : %d", gs);
	
}