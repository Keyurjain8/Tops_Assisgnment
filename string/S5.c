//Write a program in C to compare two strings without using string library
//functions.
#include <stdio.h>  
#include<stdlib.h>
int compare(char[],char[]);  
int main()  
{  
   char str1[20];  
   
   char str2[20];   
   printf("Enter the first string : ");  
	fgets(str1,sizeof str1,stdin);  
   printf("Enter the second string : ");  
   fgets(str2,sizeof str2,stdin);
   int c= compare(str1,str2); 
   if(c==0)  
   printf("strings are same");  
   else  
   printf("strings are not same");  
  
    return 0;  
}  

int compare(char a[],char b[])  
{  
    int flag=0,i=0;    
    while(a[i]!='\0' &&b[i]!='\0')   
    {  
       if(a[i]!=b[i])  
       {  
           flag=1;  
           break;  
       }  
       i++;  
    }  
    if(flag==0)  
    return 0;  
    else  
    return 1;  
}  
