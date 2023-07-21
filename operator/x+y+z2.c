#include<stdio.h>
main(){
	int x, y, z, ans;
	
	printf("enter value of X : ");
	scanf("%d", &x);
	
	printf("enter value of Y : ");
	scanf("%d", &y);
	
	printf("enter value of Z : ");
	scanf("%d", &z);
		
	ans=(x+y+z)*(x+y+z);
	printf("value of (x + y + z)2 : %d", ans);
}