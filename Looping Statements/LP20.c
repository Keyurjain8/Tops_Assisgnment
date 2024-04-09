//20. WAP program to print below output using for loop
//01 02 03 04 05 06 07 08 09 10
//11 12 13 14 15 16 17 18 19 20
//..............
//..............
//41 42 43 44 45 46 47 48 49 50
#include<stdio.h>
void main()
{
	int numbers=1,i,j,rows,cols;
	printf("Enter total no rows:\n");
	scanf("%d",&rows);
	printf("Enter number of cols :\n");
	scanf("%d",&cols);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=cols;j++){
			
			printf("%02d",numbers++);
		}
		
		printf("\n");
	}
	
	
}

