#include<stdio.h>

main(){
	//https://miro.com/app/board/uXjVMzBDtD4=/?share_link_id=52106280699
	int a, b, c;
	
	printf("Enter value of A : ");
	scanf("%d", &a);
	
	printf("Enter value of B : ");
	scanf("%d", &b);
	
	printf("Enter value of C : ");
	scanf("%d", &c);
	
	
	if(a<b){
		if(a<c){
			printf("a is min....");
		}
		else{
			printf("c is min....");
		}
	}
	else{
		if(b<c){
			printf("b is min....");
		}
		else{
			printf("c is min....");
		}
	}
}