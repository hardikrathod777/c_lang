#include<stdio.h>
main(){
	
	int a, b, c;
	
	printf("enter value of A : ");
	scanf("%d", &a);
	
	printf("enter value of B : ");
	scanf("%d", &b);
	
	printf("enter value of C : ");
	scanf("%d", &c);

	a > b ? 
		a > c ? printf("A is max....")
		:
		printf("c is max....")
	:
		b > c ? 
		printf("b is max....")
		:
		printf("c is max....");
}