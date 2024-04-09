//1. Write a program to find out the max number from given array using function

#include <stdio.h>
int maximum (int arr[],int size);
int main()
{
	int arr[] = { 10,9,6,80,45,18};	
	int size = sizeof(arr) / sizeof(arr[0]);
	if (size == 0) {
        printf("Array is empty!\n");
        return 1; 
        
    }
    printf("%d is a size of Array",size);
		int m = maximum(arr,size);
		printf("\n%d is maximum number of array",m);
		return 0;
}
int maximum(int arr[],int size)
{
	int i,m;
   m=arr[0]; 
	for(i=0;i<size;i++)
	{
		if(arr[i] > m){
			m=arr[i];
		}
	
		
	}
	return m;
}


	


