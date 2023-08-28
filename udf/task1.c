#include <stdio.h>
cube(num);
int main()
{
    int num;
    int c;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    
    c = cube(num);

    printf("Cube of %d is %d", num, c); 
}

cube(num)
{
    return (num * num * num);
}
