#include<stdio.h>
main(){
	int a=10, b=20;
	
	printf("before swaping a=%d, b=%d", a , b);
	
	a=b+a;
	b=a-b;
	a=a-b;
	
	printf("\nafter swaping a=%d, b=%d", a , b);
}