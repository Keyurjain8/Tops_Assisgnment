#include<stdio.h>
void main()
{
	int i,j,end;
	char  alphabet = 'A';
	printf("Enter the end row number :");
	scanf("%d",&end);
	for(i=1;i<=end;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",alphabet);
			alphabet++;
		}
		printf("\n");
	}
	
}
