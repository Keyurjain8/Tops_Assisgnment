//35.Accept the input month number and print number of days in that month.
#include<stdio.h>
int main()
{
	int Monthno;
	printf("Enter the Month Number :");
	scanf("%d",&Monthno);
	  switch (Monthno)
	  {
	  	case 1:
	  	printf("31 Days in january Month ");
	  	break;
	  		case 2:
	  	printf("28 Days in febuary month and 29 days in leap year ");
	  	break;
	  		case 3:
	  	printf("31 Days in march ");
	  	break;
	  		case 4:
	  	printf("30 Days in April ");
	  	break;
	  		case 5:
	  	printf("31 Days in May ");
	  	break;
	  		case 6:
	  	printf("30 Days in June ");
	  	break;
	  		case 7:
	  	printf("31 Days in July ");
	  	break;
	  		case 8:
	  	printf("31 Days in August ");
	  	break;
	  		case 9:
	  	printf("30 Days in Septemeber ");
	  	break;
	  		case 10:
	  	printf("31 Days in October ");
	  	break;
	  		case 11:
	  	printf("30 Days in November");
	  	break;
	  		case 12:
	  	printf("31 Days in December ");
	  	break;
	  	
	  	default:
	  		printf("Invalid Month NUmber");
	  }
}
