//10.WAP to perform Palindrome number using for loop and function
#include<stdio.h>
void palindrome();
void main()
{

     palindrome();
	
	
}
void palindrome( )  
{    
int n,r,sum=0,temp;    
printf("enter the number=");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=(sum*10)+r;    	`
n=n/10;    
}    
if(temp==sum)    {
	printf("%d is palindrome number",temp);    
}

else    {
	printf("%d is not palindrome",temp); 
}
  

}   
