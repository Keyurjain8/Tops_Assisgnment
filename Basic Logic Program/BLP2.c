#include<stdio.h>
int main()
{
	int n1 ,n2,sum;
	printf("Enter the first and second number",n1,n2);
	scanf("%d \n%d",&n1,&n2);
	sum = n1+n2;
	printf("Addition ofr %d + %d = %d",n1,n2,sum);
	
 
	sum = n1-n2;
	printf("\nSubtraction of %d - %d = %d",n1,n2,sum);
	
	sum = n1 * n2;
	printf("\nMultiplication of %d * %d = %d",n1,n2,sum);
	
	sum = n1/n2;
	printf("\nDivison of %d / %d = %d",n1,n2,sum);
	return 0;
}
