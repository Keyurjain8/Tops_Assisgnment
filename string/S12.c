//12.Write a program in C to find the number of times a given word 'is' appears in
//the given string.
#include <stdio.h>
#include <string.h>

int main() {
    int freq = 0,i;
    char str[100];
    
    printf("Find the number of times the word 'is' in any combination appears:\n");
    printf("--------------------------------------------------------------\n");
    
    printf("Input the string: ");
    fgets(str, sizeof(str), stdin);

    // Loop through the string
    for (i = 0; str[i] != '\0'; i++) {
        // Check for the word "is" or "Is"
        if ((str[i] == 'i' || str[i] == 'I') &&
            (str[i + 1] == 's' || str[i + 1] == 'S') &&
            (str[i + 2] == ' ' || str[i + 2] == '\0')) {
            freq++;
        }
    }

    printf("The frequency of the word 'is' is: %d\n", freq);
    return 0;
}

