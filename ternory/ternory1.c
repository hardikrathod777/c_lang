#include<stdio.h>

main(){
	
	int a, b;
	
	printf("enter value of A : ");
	scanf("%d", &a);
	
	printf("enter value of B : ");
	scanf("%d", &b);

	a > b ? printf("A is max...") : printf("B is max...");
}