//Calculate 5 numbers from user  and calculate number of even and odd using of while loop
#include<stdio.h>
void main()
{
	int num,i=1,sum=0,evenno=0,oddno=0,sumeven=0,sumodd=0;
	printf("Enter five number :\n");
	while(i<=5)
	{
		printf("Enter numbers %d  ",i);
		scanf("%d",&num);
		sum+=num;
		i++;
		printf("Sum of numbers is %d",sum);
		if(num%2==0){
		evenno++;
		printf("\ncalculate no. of even no is %d\n",evenno);
	}
	else
	{
	oddno++;
		printf("\ncalculate no.of odd no is %d\n",oddno);
		
	}
		
	}
	
}

