#include<stdio.h>
main ()
{
  int arr[n],i,sum=0;
  printf("wellcome to to array calculator");
  printf("please enter the arrar");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
   sum=sum + arr[i];
  }
  printf("sum of the array is %d",sum);
}