#include<stdio.h>
main(){
	int r;
	const float pi=3.14;
	float c;
	
	printf("enter redious of circle : ");
	scanf("%d", &r);
	
	c=2*pi*r;
	
	printf("value of circumference : %.2f",c);
}