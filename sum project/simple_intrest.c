#include<stdio.h>
main(){
	int si ,p , r ,t ;
	printf("enter value of principal : ");
	scanf("%d", &p);
	
	printf("enter value of interest rate : ");
	scanf("%d", &r);
	
	printf("enter value of time duretion in year: ");
	scanf("%d", &t);
	
	si=p*r*t/100;
	printf("value of simple intrest : %d",si);
}