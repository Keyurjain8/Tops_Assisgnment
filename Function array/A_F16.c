//Accept 5 numbers from user and perform sum of array
#include<stdio.h>
void main()
{
	int odd,even,n,i,sum=0;
	printf(" Enter total Number:\n");
 	   scanf("%d",&n);
 	   int a[n];
 	   printf("Entered %d number:\n",n);
 	   for(i=0;i<n;i++)
 	   {
 	   	printf("\nEnter number %d : ",i+1);
 	   	scanf("%d",&a[i]);
 	   	sum=sum+a[i];
 	   }
 	   printf("Print Sum of Array :\n");
 	   
 	   	printf("%d\n",sum);
		
 }
 	   	
