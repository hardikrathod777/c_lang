#include <stdio.h>
int main()
{
  int r;
  int c;
  
  printf("Ener row size: ");
  scanf("%d", &r);
  printf("Ener column size: ");
  scanf("%d", &c);

  int arr[r][c];

  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
      printf("Enter arr[%d][%d]: ",i,j);
      scanf("%d", &arr[i][j]);
    }
    printf("\n");
  }
  
  printf("The 2D Array are:\n");
  for(int i=0; i<r; i++) {
    for(int j=0; j<c; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}