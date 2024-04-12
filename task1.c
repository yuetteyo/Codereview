#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    scanf("%d", &n);

    int** matrix1 = calloc(n, sizeof(int*));
    for(int i = 0; i < n; i++) {
        matrix1[i] = calloc(n, sizeof(int));
    }

    int** matrix2 = calloc(n, sizeof(int*));
    for(int i = 0; i < n; i++) {
        matrix2[i] = calloc(n, sizeof(int));  
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    int** matrix_result = calloc(n, sizeof(int*));
    for(int i = 0; i < n; i++) {
        matrix_result[i] = calloc(n, sizeof(int));
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++){
                matrix_result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d", matrix_result[i][j]);
            if(j != n - 1) {
                printf(" ");
            }
        }
        if(i != n - 1) { 
                printf ("\n");
        }
    }
}
