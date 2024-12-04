#include<stdio.h>
int main()
{
  int i,j;
  char ch[]={'C','O','M','P','U','T','E','R'};
  for(i=0;i<9;i++)
  {
    for(j=0;j<i;j++)
    {
      printf("%c",ch[j]);
    }
    printf("\n");
  }
  return 0;

}