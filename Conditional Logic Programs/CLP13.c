//WAP to find minimum number among 3 numbers using ternary operator
#include <stdio.h>
int main()
{
	int a,b,c,min;
	printf("Enter First Numbers:");
	scanf("%d",&a);
	printf("Enter Second Numbers:");
    scanf("%d",&b);
    printf("Enter Third Numbers:");
    scanf("%d",&c);
	min=(a<b)?(a<c?a:c):(b<c?b:c);
	printf("%d is Minimum number among three number",min);
	
}
