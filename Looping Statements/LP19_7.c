#include <stdio.h>

#define SIZE 10

int main() {
    int num = 1,i,j;
    int direction = 0; 
    int row = 0, col = 0;

    for (i = 0; i < SIZE; i++) {
        for ( j = 0; j < SIZE; j++) {
            printf("%4d", num++);
            if (direction == 0) {
                col++;
                if (col == SIZE || (col == SIZE - 1 && row == SIZE / 2))
                    direction = 1;
            } else if (direction == 1) {
                row++;
                if (row == SIZE)
                    direction = 2;
            } else if (direction == 2) {
                col--;
                if (col == -1 || (col == 0 && row <= SIZE / 2))
                    direction = 3;
            } else if (direction == 3) {
                row--;
                if (row == 0)
                    direction = 0;
            }
        }
        printf("\n");
    }

    return 0;
}

