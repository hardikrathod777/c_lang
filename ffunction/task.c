#include<stdio.h>
firstdata(){
	
	FILE* hs;
	
	hs = fopen("task.txt", "w");
	
	if(hs == NULL){
		printf("file note found");
	}
	else{
		printf("file open\n\n");
		
		fputs("hello world!...", hs);
		printf("text file write..\n");
		
		fclose(hs);
		
		printf("text file is closed\n");
	}
}
seconddata(){
	
	FILE* hs;
	char x[40];
	
	hs = fopen("task.txt", "r");
	
	if(hs == NULL){
		printf("file not found");
	}
	else{
		printf("file open\n");
		
		fgets(x,40,hs);
		printf("%s\n", x);
		
		fclose(hs);
		
		printf("file closed..\n");
	}
}
main(){
	firstdata();
	seconddata();
}
