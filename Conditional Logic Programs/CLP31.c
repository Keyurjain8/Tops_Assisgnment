//Write a program in C to read any Month Number in integer and display the number of days for this month.
#include<stdio.h>
int main()
{
	int Monthno;
	printf("Enter the Month Number :");
	scanf("%d",&Monthno);
	  switch (Monthno)
	  {
	  	case 1:
	  	printf("Month Name is January \nNumber of Days in Month is 31 ");
	  	break;
	  		case 2:
	  	printf("Month Name is Febuary \nNumber of Days in Month is 28 and\n29 Days in leap year ");
	  	break;
	  		case 3:
	  	printf("Month Name is March \nNumber of Days in Month is 31 ");
	  	break;
	  		case 4:
	  	printf("Month Name is April \nNumber of Days in Month is 30 ");
	  	break;
	  		case 5:
	  	printf("Month Name is May \nNumber of Days in Month is 31 ");
	  	break;
	  		case 6:
	  	printf("Month Name is June \nNumber of Days in Month is 30 ");
	  	break;
	  		case 7:
	  	printf("Month Name is July \nNumber of Days in Month is 31 ");
	  	break;
	  		case 8:
	  	printf("Month Name is August \nNumber of Days in Month is 31 ");
	  	break;
	  		case 9:
	  	printf("Month Name is Septemeber \nNumber of Days in Month is 30 ");
	  	break;
	  		case 10:
	  	printf("Month Name is October \nNumber of Days in Month is 31 ");
	  	break;
	  		case 11:
	  	printf("Month Name is November \nNumber of Days in Month is 30 ");
	  	break;
	  		case 12:
	  	printf("Month Name is December \nNumber of Days in Month is 31 ");
	  	break;
	  	
	  	default:
	  		printf("Invalid Month NUmber");
	  }
}
