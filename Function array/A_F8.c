//8. WAWAP to reverse a string and check that the string is palindrome or not
#include <stdio.h>
#include <string.h>

int main() {
   char str[100], rev_str[100];

   printf("Enter a string: ");
   scanf("%s",&str);

   strcpy(rev_str, str);
   strrev(rev_str);
   
   printf("%s is a reverse string \n",rev_str);

   if(strcmp(str, rev_str) == 0)
      printf("%s is a palindrome string.\n", str);
   else
      printf("%s is not a palindrome string.\n", str);

   return 0;
}
