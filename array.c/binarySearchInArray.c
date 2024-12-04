#include<stdio.h>
int main()
{
  int arr[5],i,low,mid,high,value,n;
  printf("enter the value of the element in ascending order");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("enter the element");
    scanf("%d",&arr[i]);
  }
  printf("enter the value want to search");
  scanf("%d",&value);
  low =0;
  high = n-1;
  mid = (low+ high)/2;
  for(i=low;i<high;i++)
  {
    if(arr[mid]<value)
    {
      low = mid+1;
    }
    else if(arr[mid]==value)
    {
      printf("\n%d found at location %d",value,mid+1);
      break;
    }
    else
    {
      high= mid -1;
    }
    mid = (low + high )/2;

  }
  if(low>high)
  printf("%d not found the loacation",value);
  return 0;
}