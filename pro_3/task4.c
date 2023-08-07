#include<stdio.h>
main(){
	
	int n, sum=0, f,l;
	
	printf("enter any digit of number : ");
	scanf("%d", &n);
	
	l=n%10;
	f=n;
	
	for(sum; n>=10; n=n/10){
		
	}
	f=n;
	sum=f+l;
	
	printf("sum of last and firstdigit in number : %d", sum);
}