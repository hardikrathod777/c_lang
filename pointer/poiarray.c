#include<stdio.h>
main(){
	
	int a[5] = {1,2,3,4,5};
	int *p[5];
	int i;
	
	p[0] = &a[0];
	
	for(i=0; i<5; i++){
		printf("%u  %d\n", p[i], *p[i]);
		p[i+1]=&a[i+1];
	} 
}