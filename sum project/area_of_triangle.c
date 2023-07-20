#include<stdio.h>
main(){
	int h, b, ans;
	printf("enter base to height value : ");
	scanf("%d", &h);
	
	printf("enter baseline value : ");
	scanf("%d", &b);
	
	ans=h*b/2;
	printf("value of triangle : %d",ans);
}