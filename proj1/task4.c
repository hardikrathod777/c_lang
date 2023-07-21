#include<stdio.h>
main(){
	
	float c, f ;
	const float sum=1.8;
	
	printf("enter temperature in celsiuus : ");
	scanf("%f", &c);
	f=sum*c+32;
	printf("temperature in fahrenheit is : %.2f" ,f);
}