#include<stdio.h>
main(){
	int r;
	const float pi= 3.14 ;
	float ans;
	
	printf("enter redius of circle : ");
	scanf("%d", &r);
	
	ans=pi*r*r;
	printf("area of circle : %.2f",ans);
}