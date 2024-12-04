#include<stdio.h>
struct employee
{
  int empId;
  char name[15];
  float salary;
}emp;
int main()
{
  printf("enter the following details\n");
  printf("please enter the name of the employee\n");
  scanf("%s",emp.name);
  printf("please enter the employee i'd\n");
  scanf("%d",&emp.empId);
  printf("please enter the salary of the employee\n");
  scanf("%f",&emp.salary);
  printf("%s\n",emp.name);
  printf("%d\n",emp.empId);
  printf("%f\n",emp.salary);
  return 0;
}

