#include<stdio.h>
int main ()
{
  int n,i,maxIndex,minIndex,tem;
  printf("enter the  nof of the element in array");
  scanf("%d",&n);
  int arr[n];
  printf("enter %d element",n);
  for(i=0; i<n; i++)
  {
    scanf("%d",&arr[i]);
  }
  int max= arr[0], min=arr[0];
  maxIndex=minIndex=0;
  for(i=0;i<n;i++)
  {
    if(arr[i]>max)
    {
      max=arr[i];
      maxIndex=i;
    }
    if(arr[i]<min)
    {
      min=arr[0];
      maxIndex=i;

    }
    /* tem = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = tem;*/

    // Print the modified array
    printf("Array after interchanging largest and smallest elements:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }    

  }
  return 0;
}
