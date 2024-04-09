//33. WAP to input the week number and print week day.
#include<stdio.h>
int main()
{
	int weekno;
	printf("Enter a Week number :");
	scanf("%d",&weekno);
	
	switch(weekno)
	{
		case 1:
			printf("Monday");
			break;
			 case 2:
			 printf("Tuesday");
			 break;
			    case 3:
			printf("Wednesday");
			break;
			   case 4:
			printf("Thursday");
			break;
			 
			  case 5:
			printf("friday");
			break;
			case 6:
			printf("Saturday");
			break;
			case 7:
			printf("Sunday");
			break;
			
			default:
				printf("Invalid day");
}
}
