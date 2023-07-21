#include<stdio.h>
main(){
	int x, y, ans;
	
	printf("enter value of X : ");
	scanf("%d", &x);
	
	printf("enter value of Y : ");
	scanf("%d", &y);
	
	ans=(x-y)*3;
	printf("value of (x - y)3 : %d", ans);
}