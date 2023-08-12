
#include <stdio.h>

int main()
{
    int r, c, s;

    for(r=1; r<=5; r++){
		for(s=4; s>=r; s--){
			printf(" ");
		}
		for(c=1; c<=r; c++){
			printf("%d", c);
		}
		printf("\n");
	}
    for(r=1;r<=5;r++){
		
		for(s=r; s>=2; s--){
			printf(" ");
		}
		for(c=r;c<=5;c++){
			printf("%d", c);
		}
		printf("\n");
	}
}