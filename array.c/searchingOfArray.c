#include<stdio.h>
int main()
{
  int i,arr[5],flag=0,n;
  printf("enter the element");
  for(i=0;i<5;i++)
  {
    //printf("enter the element %d",arr[i]);
    scanf("%d",&arr[i]);
  }
  printf("enter the element you want to search: ");
  scanf("%d",&n);
  for(i=0;i<5;i++)
  {
    if(arr[i]==n)
    {
      printf("\n\n%d element the position of the element is %d",arr[i],i+1);
      flag=1;
      break;
    }
  }
  if (flag==0)
  {
    printf("\n\n%dthe enter element is not found",n);
  }
  return 0;
}