//WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array
#include <stdio.h>
int main() {
    int n, i, j, k;
    printf("Enter the size of matrices (n x n): ");
    scanf("%d", &n);

    int arr1[n][n], arr2[n][n], result[n][n];

    printf("------------- Enter the first Matrix: ---------------\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter the value for position [%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");}

    printf("------------- Enter the second Matrix: --------------\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter the value for position [%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    
    }
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
   }

    
    printf("--------- Addition of two matrices ---------\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            result[i][j] = 0;
            
                result[i][j] += arr1[i][j] + arr2[j][i];
            }
        }
    

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
     printf("--------- Subtraction of two  matrices ---------\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            result[i][j] = 0;
            
                result[i][j] += arr1[i][j] - arr2[j][i];
            }
        }
    

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    printf("--------- Multiplication of Matrices ---------\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            result[i][j] = 0;
            for (k = 0; k < n; k++) {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }


    return 0;
}


