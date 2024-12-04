#include<stdio.h>
int main ()
{
  int matrix[2][4],i,j;
  for(i=0;i<2;i++)
  {
    for(j=0;j<4;j++)
    {
      printf("\n enter the element of the matrix[%d][%d]",i,j);
      scanf("%d",&matrix[i][j]);
    }
  }
  printf("\n entered matrix is \n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<4;j++)
    {
      printf("%d",matrix[i][j]);
    
    }
    printf("\n");
  }
  printf("transpose of the matrix\n");
  for(i=0;i<4;i++)
  {
    for(j=0;j<2;j++)
    {
      printf("%d",matrix[j][i]);

    }
    printf("\n");
  }
  return 0;
}