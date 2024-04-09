#include<stdio.h>
struct employee{
	int  id;
	char  name[100];
	float  salary;
	
};
int main()
{
	struct employee e1;
	printf("enter employee number ");
	scanf("%d",&e1.id);
	printf("enter employee name ");
	scanf("%s",&e1.name);
	printf("enter employee salary ");
	scanf("%f",&e1.salary);
	
	printf("%d is id and %s is name %0.2f is salary",e1.id,e1.name,e1.salary);
	return  0;
}
