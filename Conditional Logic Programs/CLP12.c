//WAP to find maximum number among 3 numbers using ternary operator
#include <stdio.h>
int main()
{
	int a,b,c,max;
	printf("Enter First Numbers:");
	scanf("%d",&a);
	printf("Enter Second Numbers:");
    scanf("%d",&b);
    printf("Enter Third Numbers:");
    scanf("%d",&c);
	max=(a>b)?(a>c?a:c):(b>c?b:c);
	printf("%d is Maximum number among three",max);
	
}
