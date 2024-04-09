//Write a program in C to find the maximum number of characters in a string
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000

int main() {
    char string[MAX_LENGTH];
    int maxLength = 0;

    
    printf("Enter a string: ");
    fgets(string, MAX_LENGTH, stdin);

   
    string[strcspn(string, "\n")] = '\0';

    
    maxLength = strlen(string);

    printf("Maximum number of characters in the string: %d\n", maxLength);

    return 0;
}

