#include<stdio.h>
main(){
	
	char ch;
	
	printf("enter any keyworld : ");
	scanf("%c", &ch);
	
	if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
		printf("%c is charechter", ch);
	}
	else if(ch >= 0 && ch <= 9){
		printf("%c is number", ch);
	}
	else{
		printf("%c is special character", ch);
	}
		
}