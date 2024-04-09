//Accept marks from user and check pass or fail
#include<stdio.h>
int main()
{
	int marks,pass,fail;
	printf("Enter Marks:");
	scanf("%d",&marks);
	if(marks>40)
	{
		printf(" you have Passed",pass);
	}
	else{
		printf("you have failed",fail);
	}
	
}
