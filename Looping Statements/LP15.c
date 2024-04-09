//.Calculate sum of 10 numbers using of while loop
#include<stdio.h>
void main()
{
	int i=1,num,sum=0;
	printf("enter 10  number : ");
while(i<=10)
{
	printf("\nenter number %d ",i);
		scanf("%d",&num);
		sum +=num;
		i++;
}
printf("%d is sum of numbers ",sum);
}
