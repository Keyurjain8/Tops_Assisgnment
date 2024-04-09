//Accept number of students from user. I need to give 5 apples to each student. How many apples are required
#include<stdio.h>
int main()
{
	int students, totalapple;
	printf("Enter the number of students ",students);
	scanf("%d",&students);
	totalapple = students*5;
	printf("Total apples required is %d",totalapple);
	return 0;
	
}
