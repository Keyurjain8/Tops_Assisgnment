#include<stdio.h>
void main()
{
  int n;
  printf("Enter integer :");
  scanf("%d",&n);
  printf("print first three powers %d",n);
  printf("first number power %d",n,n*n);
  printf("second number power %d",n,n*n,n*n);
printf("Third number power %d",n,n*n,n*n,n*n);
}