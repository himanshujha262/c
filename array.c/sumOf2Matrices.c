#include<stdio.h>
void main()
{
  int a[3][3],b[3][3],c[3][3],i,j;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("enter the first mtrix a[%d][%d]:",i,j);
      scanf("%d",&a[i][j]);
    }

  }
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("enter the second mtrix b[%d][%d]:",i,j);
      scanf("%d",&b[i][j]);
    } 
    
  }
  for(i=0;i<3;i++)
  {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j] + b[i][j];
        }
        printf("\n");
  }    
    printf("sum of the 2 matrix is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",c[i][j]);
        }
        
    }
    printf("\n");
  
}