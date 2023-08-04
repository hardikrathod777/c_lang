#include<stdio.h>
main(){
	
	char ch;
	
	printf("enter first chareter of week name : ");
	scanf("%c", &ch);
	
	switch(ch){
		case 'M' :
		case 'm' :
			printf("%c is monday", ch);
			break;
			
		case 't' :
		case 'T' :
			printf("%c is tuesday", ch);
			printf("%c is thursday", ch);
			break;
			
		case 'W' :
		case 'w' :
			printf("%c is wednesday", ch);
			break;
			
		case 'f' :
		case 'F' :
			printf("%c is friday", ch);
			break;
			
		case 'S' :
		case 's' :
			printf("%c is saturday", ch);
			printf(" %c is sunday", ch);
			break;
		default :
			printf("%c invalid chareter", ch);
	}
}