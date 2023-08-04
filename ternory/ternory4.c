#include<stdio.h>
main(){
	
	int a, b, c, d, e;
	
	printf("enter value of A : ");
	scanf("%d", &a);
	
	printf("enter value of B : ");
	scanf("%d", &b);
	
	printf("enter value of C : ");
	scanf("%d", &c);
	
	printf("enter value of D : ");
	scanf("%d", &d);
	
	printf("enter value of E : ");
	scanf("%d", &e);
	
	a > b ? 
		a > c ? 
			a > d ? 
				a > e ? 
					printf("A is max...")
				:
					printf("E is max...")
			:
				d > e ? 
					printf("D is max...")
				:
					printf("E is max...")
		:
			c > d ? 
				c > e ? 
					printf("C is max...")
				:
					printf("E is max...")
			:
				d > e ? 
					printf("D is max...")
				:
					printf("E is max...")
	:
		b > c ? 
			b > d ? 
				b > e ? 
					printf("B is max...")
				:
					printf("E is max...")
			:
				d > e ? 
					printf("D is max...")
				:
					printf("E is max...")
		:
			c > d ?  
				c > e ? 
					printf("C is max...")
				:
					printf("E is max...")
			:
				d > e ? 
					printf("D is max...")
				:
					printf("E is max...");
}