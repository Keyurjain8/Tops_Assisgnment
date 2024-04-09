//.Calculate the Sum of Natural Numbers Using the While Loop
#include<stdio.h>
void main()
{
	int num,i=1,sum=0;
	printf("Enter numbers :");
	scanf("%d",&num);
	while(i<=num){
		sum+=i;
		i++;
	}
	printf("Sum of %d natural is = %d\n",num,sum);
}
