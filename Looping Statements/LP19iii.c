#include<stdio.h>
void main()
{
	int i,j,k,end;

	printf("Enter the end row number :");
	scanf("%d",&end);
	for(i=1;i<=end;i++)
	{
		for(j=i;j<end;j++)
		{
		
			printf(" ");
		}
		for(k=1;k<(i*2);k++)
		{
			printf("*");
		}
		
				printf("\n");
	
	}
	
	

}


