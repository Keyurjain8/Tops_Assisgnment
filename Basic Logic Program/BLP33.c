#include<stdio.h>
void main()
{
  int n;
  printf("Enter integer :");
  scanf("%d",&n);
  printf("print first three powers %d:\n",n);
  printf("%d^1 = %d\n",n,n);
  printf("%d^2 = %d\n",n,n*n);
  printf("%d^3 = %d\n",n,n*n*n);
}
