//WAP to take two Array input from user and sort them in ascending or
//descending order as per user’s choice
#include<stdio.h>
int main()
{
	int n,temp,i,j;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	
	int arr[n];
	for(i=0;i<=n;i++)
	{
	printf("Enter elements %d:",i);
	scanf("%d",&arr[i]);
	}
	for(i=0;i<=n;i++)
	{
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
				
			}
			
		}
	
	}for(i=0;i<=n;i++)
	{
	
	printf("\nArray  in Ascending form %d:",arr[i]);
}
    printf("\n");
    for(i=0;i<=n;i++)
	{
		for(j=0;j<i+1;j++){
			if(arr[i]>arr[j]){
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
				
			}
			
		}
	
	}
	for(i=0;i<=n;i++)
	{
	
	printf("\nArray  in Decending form %d:",arr[i]);
}
    
    return 0;

}
