#include<stdio.h>
main(){
	
	//+
	int a, b, ans;
	printf("enter value of a : ");
	scanf("%d", &a);
	printf("enter value of b : ");
	scanf("%d", &b);
	ans= a + b;
	printf("A + B = %d\n\n",ans);
	
	//-
	int x, y, x_y;
	printf("enter value of x : ");
	scanf("%d", &x);
	printf("enter value of y : ");
	scanf("%d", &y);
	x_y= x - y;
	printf("X - Y = %d\n\n",x_y);
	
	//*
	int c, d, c_d;
	printf("enter value of c : ");
	scanf("%d", &c);
	printf("enter value of d : ");
	scanf("%d", &d);
	c_d= c * d;
	printf("C * D = %d\n\n",c_d);
	
	//
	int e, f, e_f;
	printf("enter value of e : ");
	scanf("%d", &e);
	printf("enter value of f : ");
	scanf("%d", &f);
	e_f= e / f;
	printf("E / F = %d\n\n",e_f);
	
}