#include<stdio.h>
struct employee{
	int  number;
	char  name[100];
	float  salary;
	
};
int main()
{
	struct employee e[5];
	int i;
	for(i=0;i<3;i++)
	{
		printf("enter employee number %d ",i+1);
	scanf("%d",&e[i].number);
	printf("enter employee name %d ",i+1);
	scanf("%s",&e[i].name);
	printf("enter employee salary %d ",i+1);
	scanf("%f",&e[i].salary);
	}
	printf("\n------------------------------------\n");
	for(i=0;i<3;i++)
	{
		printf("\ndetails of %d employee",i+1);
		printf("\n number : %d \t name :%s \tsalary:%0.2f",e[i].number,e[i].name,e[i].salary);
	}
}
