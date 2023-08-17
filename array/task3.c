#include <stdio.h>
int main() {
    int i;
    int num[]={1,2,3,4,5}, sum, avg;
	
	sum=num[1]+num[2]+num[3]+num[4]+num[5];
    avg = sum / 5;
    printf("Average = %d", avg);
}
