#include<stdio.h>
void main()
{
	int end, i,j;
	printf("Enter rows:");
	scanf("%d",&end);
	for(i=1;i<=end;i++)
	{
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	for(i =end-1;i>=1;i--)
	{
		for(j =1;j<=i;j++){
			printf("*");
		
			
		}
		printf("\n");
		
		
	}

	
}


