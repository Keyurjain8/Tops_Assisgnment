#include<stdio.h>
void main()
{
	int end, i,j,n=1;
	printf("Enter rows:");
	scanf("%d",&end);
	for(i=1;i<=end;i++)
	{
		for(j=1;j<=i;j++){
			printf("%d",n);
			n++;
		}
		printf("\n");
}
}

