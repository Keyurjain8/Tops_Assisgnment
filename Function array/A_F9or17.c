#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student{

	int s_roll_no;
	char s_name[100];
	
};
union student1{
	int u_roll_no;
	char u_name[100];
	
};
int main()
{
	
	struct  student s1={101,"xyz"};
	printf("\n-----------------Structure :---------------------\n");
	printf("%d %s",s1.s_roll_no,s1.s_name);
	printf("\n sizeof structure variable is %d",sizeof(s1));
	printf("\n-----------------union :---------------------\n");
	union student1 u1;
	u1.u_roll_no=102;
	printf("%d ",u1.u_roll_no);
	strcpy(u1.u_name,"pqr");
	printf("%s",u1.u_name);
	printf("\n sizeof union variable is %d",sizeof(u1));
		
		return 0;
	
}
	
	


