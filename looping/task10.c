#include<stdio.h>
main(){
	
	int n, b=1;
	
	printf("enter table number you want : ");
	scanf("%d", &n);
	
	while(b <= 10){
		
		printf("%d*%d = %d\n",n , b, n*b);
		b++;
	}
}