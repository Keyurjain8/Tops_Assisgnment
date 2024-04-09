//34. Accept month number and display month name
#include<stdio.h>
int main()
{
	int Monthno;
	printf("Enter the Month Number :");
	scanf("%d",&Monthno);
	  switch (Monthno)
	  {
	  	case 1:
	  	printf("Month Name is January ");
	  	break;
	  		case 2:
	  	printf("Month Name is Febuary ");
	  	break;
	  		case 3:
	  	printf("Month Name is March  ");
	  	break;
	  		case 4:
	  	printf("Month Name is April  ");
	  	break;
	  		case 5:
	  	printf("Month Name is May  ");
	  	break;
	  		case 6:
	  	printf("Month Name is June ");
	  	break;
	  		case 7:
	  	printf("Month Name is July  ");
	  	break;
	  		case 8:
	  	printf("Month Name is August ");
	  	break;
	  		case 9:
	  	printf("Month Name is Septemeber  ");
	  	break;
	  		case 10:
	  	printf("Month Name is October ");
	  	break;
	  		case 11:
	  	printf("Month Name is November  ");
	  	break;
	  		case 12:
	  	printf("Month Name is December ");
	  	break;
	  	
	  	default:
	  		printf("Invalid Month NUmber");
	  }
}
