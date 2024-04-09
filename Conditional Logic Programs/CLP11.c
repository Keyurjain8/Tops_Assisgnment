//WAP to find number is even or odd using ternary operator
#include <stdio.h>  
  
int main()  
{  
    int n,even,odd;  
  
    printf("Enter an integer number\n");  
    scanf("%d", &n);  
  
    (n % 2 == 0) ?
	(printf("%d is even  number\n", n)):
	(printf("%d is Odd  number\n", n));   
     
    
  
    return 0;  
 
}
