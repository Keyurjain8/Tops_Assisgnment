//WAP to find the largest of three numbers.
#include <stdio.h>
int main()


{
	int n1,n2,n3;
	printf("Enter three number ",n1,n2,n3);
	scanf("%d %d %d",&n1 ,&n2, &n3);
	if(n1>=n2 && n1>=n3)
	
	printf("largest number %d\n" ,n1);
	
	else if(n2>n3)
		printf("largest number %d\n",n2);
		
	
	else
		printf("largest number %d\n",n3);
	}
	
