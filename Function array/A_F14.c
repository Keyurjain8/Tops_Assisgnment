//14.Perform 2D matrix array
#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter the size of matrices (n x n): ");
    scanf("%d", &n);

    int arr1[n][n], arr2[n][n];

    printf("------------- Enter 2-D  Matrix: ---------------\n");
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
        printf("\n");
		}
	}

