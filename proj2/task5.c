#include<stdio.h>
main(){
	
	int physics, chemistry, biology, mathematics, computer;
	float totalmarks, percentage;
	char grade;
	
	printf("enter the marks of physics : ");
	scanf("%d", &physics);
	
	printf("enter the marks of chemistry : ");
	scanf("%d", &chemistry);
	
	printf("enter the marks of biology : ");
	scanf("%d", &biology);
	
	printf("enter the marks of mathematics : ");
	scanf("%d", &mathematics);
	
	printf("enter the marks of computer : ");
	scanf("%d", &computer);
	
	totalmarks=physics+chemistry+biology+mathematics+computer;
	
	percentage=totalmarks/5;
	
	if(percentage >= 90){
		grade = 'a';
	}
	else if(percentage >= 80){
		grade= 'b';
	}
	else if(percentage >= 70){
		grade= 'c';
	}
	else if(percentage >= 60){
		grade= 'd';
	}
	else if(percentage >= 50){
		grade= 'e';
	}
	else(percentage <= 40);{
		grade = 'f';
	}
	
	printf("Percentage: %.2f%\n", percentage);
    printf("Grade: %c\n", grade);

}