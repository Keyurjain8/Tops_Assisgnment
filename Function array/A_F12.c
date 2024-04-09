//WAP to accept 5 students name and store it in array
#include<stdio.h>
void main()
{
		int i,n;
		printf(" Enter total elements:");
 	   scanf("%d",&n);
		char a[n][100];
		
	  printf("Enter name of %d students:\n",n);
	 for(i=0;i<n;i++)
	{
		printf("\nEnter names %d :\n",i+1);
		scanf("%s",&a[i]);
	}
		printf("Name of students entered:\n");
	printf("\n");
	
	 for (i = 0; i < n; i++)
	 {
        printf("student %d: %s\n",i+1,a[i]);
    }
}

