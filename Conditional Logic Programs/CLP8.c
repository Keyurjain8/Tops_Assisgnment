//WAP to accept the height of a person in centimeters and categorize the person according to their height.
#include <stdio.h>
int main()
{
    float height;
 
    printf("Enter the Height (in centimetres) \n");
    scanf("%f",&height);
    if (height < 150.0)
        printf("Your height is too short \n");
    else if ((height >= 150.0) && (height <= 165.0))
        printf("Your height is Average \n");
    else if ((height>165.0) &&(height<=195.0))
        printf("You are Taller \n");
    else
        printf(" Your height is Abnormal \n");
}
