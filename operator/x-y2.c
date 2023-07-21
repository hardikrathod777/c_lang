#include<stdio.h>
main(){
	 int x, y, ans;
	 
	 printf("enter value of X : ");
	 scanf("%d", &x);
	 
	 printf("enter value of Y : ");
	 scanf("%d", &y);
	 
	 ans=(x-y)*(x-y);
	 printf("value of (x-y)2 : %d" , ans);
}