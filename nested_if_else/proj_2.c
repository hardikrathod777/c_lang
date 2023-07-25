#include<stdio.h>

main(){
	//https://miro.com/app/board/uXjVMzAihYg=/?share_link_id=517186297187
	int a, b, c , d;
	
	printf("Enter value of A : ");
	scanf("%d", &a);
	
	printf("Enter value of B : ");
	scanf("%d", &b);
	
	printf("Enter value of C : ");
	scanf("%d", &c);
	
	printf("Enter value of D : ");
	scanf("%d", &d);
	
	
	if(a>b){
		if(a>c){
			if(a>d){
				printf(" a is max....");
			}
			else{
				printf(" d is max....");
			}
		}
		else{
			if(c>d){
				printf(" c is max....");
			}	
			else{
				printf(" d is max....");	
			}
		}	
	}
	else{
		if(b>c){
			if(b>d){
				printf(" b is max....");
			}
			else{
				printf(" d is max....");
			}
		}
		else{
			if(c>d){
				printf(" c is max....");
			}
			else{
				printf(" d is max....");
			}
		}
	}
}