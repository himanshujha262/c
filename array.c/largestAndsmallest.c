#include<stdio.h>
int main ()
{
  int arr[5],i,large,small,sum=0;
  printf("enter the value the array");
  for(i=0;i<5;i++)
  {
    scanf("%d",&arr[i]);
  }
  large=small=arr[0];
  for(i=0;i<5;i++)
  {
    if(large <arr[i])
    {
      large = arr[i];
    }
    else
    {
      small = arr[i];
    }
  }
  printf("%d is the largest element in an  array\n", large);
  printf("%d is the smallest element in an  array\n", small);
  return 0;
}