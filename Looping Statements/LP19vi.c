#include<stdio.h>
void main()
{
	int end, i,j;
	char alphabets = 'A';
	printf("Enter rows:");
	scanf("%d",&end);
	for(i=1;i<=end;i++)
	{
		for(j=1;j<=i;j++){
			printf("%c",alphabets++);
			
		}
		printf("\n");
	   alphabets = 'A'; 
}
}



