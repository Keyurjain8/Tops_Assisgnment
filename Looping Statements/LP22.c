//palindrome
#include<stdio.h>
int main()
{
	int num,rem,rev,original,count=0;
	printf("Enter Three number number :");
	
	
	while (count < 3) {
        scanf("%d", &num);
        original = num;
        rev = 0; 
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
		
	}
	
	if(original==rev){
		printf("%d  is palindrome\n",original);
	}
	else{
	printf("%d is not a palindrome.\n", original);
	}
	count++;
 }
}

