//WAP to accept 5 numbers from user and check entered number is even or odd
//using of array
#include<stdio.h>
void main()
{
	int odd,even,n,i;
	printf(" Enter total Number:\n");
 	   scanf("%d",&n);
 	   int a[n];
 	   printf("Entered %d number:\n",n);
 	   for(i=0;i<n;i++)
 	   {
 	   	printf("\nEnter number %d : ",i+1);
 	   	scanf("%d",&a[i]);
 	   	printf("\nChecking even or odd:\n");
 	   	if(a[i]%2==0)
 	   	{
 	   		printf("%d number is even \n",a[i]);
			}
			else{
				printf("%d number is odd\n",a[i]);
			}
 	   	
		}

		}
 	   	
		
	

