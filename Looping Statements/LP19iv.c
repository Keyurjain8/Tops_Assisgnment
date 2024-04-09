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
	for(i = end-2;i>=0;i--)
	{
		for(j = i;j>=0;j--)
		printf("*");
		
		
	}printf("\n");
	
	
}


