////12.Program of Armstrong Number in C Using For Loop & While Loop
#include<stdio.h>
void main()
{
	int n,i,sum=0,r,count=0,originalN;
	printf("Enter a number :");
	scanf("%d",&n);
	originalN = n; 
	
	while(originalN!= 0)
	{
		originalN/=10;
		count++;
		}
		originalN = n;
		for(i=0;i<count;i++)
		{
			r=originalN%10;
			
			sum +=r * r * r;
			originalN/=10;
		}
	
	if(sum == n)
	{
		printf("%d is a Armtrong number",n);
	}
	else{
		printf("%d is Not a Armstrong number",n);
	}
}

