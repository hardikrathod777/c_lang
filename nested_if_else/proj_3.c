#include<stdio.h>

main(){
	//https://miro.com/app/board/uXjVMzAFoH0=/?share_link_id=170438686744
	int a, b, c , d ,e;
	
	printf("Enter value of A : ");
	scanf("%d", &a);
	
	printf("Enter value of B : ");
	scanf("%d", &b);
	
	printf("Enter value of C : ");
	scanf("%d", &c);
	
	printf("Enter value of D : ");
	scanf("%d", &d);
	
	printf("Enter value of E : ");
	scanf("%d", &e);
	
	if(a<b){
		if(a<c){
			if(a<d){
				if(a<e){
					printf("A is min....");
				}
				else{
					printf("E is min....");
				}
			}
			else{
				if(d<e){
					printf("D is min....");
				}
				else{
					printf("E is min....");
				}	
			}
		}
		else{
			if(c<d){
				if(c<e){
					printf("C is min....");
				}
				else{
					printf("E is min....");
				}
			}
			else{
				if(d<e){
					printf("D is min....");
				}
				else{
					printf("E is min....");	
				}
			}
		}
	}
	else{
		if(b<c){
			if(b<d){
				if(b<e){
					printf("B is min....");
				}
				else{
					printf("E is min....");
				}
			}
			else{
				if(d<e){
					printf("D is min....");
				}	
				else{
					printf("E is min....");
				}
			}
		}
		else{
			if(c<d){
				if(c<e){
					printf("C is min....");
				}
				else{
					printf("E is min....");
				}
			}
			else{
				if(d<e){
					printf("D is min....");
				}
				else{
					printf("E is min....");
				}
			}
		}
	}
}