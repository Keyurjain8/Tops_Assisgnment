//WAP to accept 5 numbers from user and display in reverse order using for loop and array
#include<stdio.h>
void main()
{
	int n,i;
		printf(" Enter total Number:");
 	   scanf("%d",&n);
 	   int a[n];
 	   printf("\nEnter %d number :",n);
 	   for(i=0;i<n;i++)
 	   {
 	   	printf("\nEnter number %d : ",i+1);
 	   	scanf("%d",&a[i]);		
	}
	printf("Entered number in reverse order :\n");
	for(i= n-1;i>=0;i--)
	{
		printf("%d:\n",a[i]);
	}
}

