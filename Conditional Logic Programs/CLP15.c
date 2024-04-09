/*Write a C program to determine eligibility for admission to a professional course based on the 
following criteriaEligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and
Total in all three subject >=190 or Total in Maths and Physics >=140 Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in Mathematics :72 Total marks of Maths, 
Physics and Chemistry 188 Total marks of Maths and Physics : 137 The candidate is not eligible.*/
#include<stdio.h>
int main()
{
	int  M ,P , C , Total_marks, MP;
	printf("Eligibility Criteria :");
	printf("\nMarks in Maths >=65 ");
	printf("\nMarks in Phy >=55");
	printf("\nMarks in Chem>=50");
	printf("\nTotal in all three subject >=190");
	printf("\nTotal in Maths and Physics >=140");
	printf("\n\n\n================================================================================\n\n\n");
	
	printf("\nInput the marks obtained in Physics ");
	scanf("%d",&P);
	printf("\nInput the marks obtained in chemistry ");
	scanf("%d",&C);
	printf("\nInput the marks obtained in Maths ");
	scanf("%d",&M);
	
	Total_marks = M+P+C;
	printf("\nTotal marks of Maths,Physics and Chemistry is %d",Total_marks);
	MP= M+P;
	printf("\nTotal marks of Maths and Physics is %d",MP);
	
	if (M>=65)
	
		if(P>=55)
		
			if(C>=50)
			
				if(Total_marks>=190 || MP>=140)
				
			
		
		
		printf("\nThe candidate is eligible ");
			
	
	else
	
			printf("\nThe candidate is not eligible ");
	}
		
	



	
	
	
	
	
	
	
	
	

