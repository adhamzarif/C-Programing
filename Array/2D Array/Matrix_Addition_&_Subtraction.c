#include <stdio.h>

int main() {   
    int i, j, n, m;
    printf("Enter Row Number: ");
    scanf("%d", &n);
    printf("Enter Column Number: ");
    scanf("%d", &m);
    int a[n][m], b[n][m], c[n][m], d[n][m];

    // For A
    printf("Enter elements for matrix A:\n");
    for (i = 0; i < n; i++) {   
        for (j = 0; j < m; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");

    // For B
    printf("Enter elements for matrix B:\n");
    for (i = 0; i < n; i++) {   
        for (j = 0; j < m; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Printing A
    printf("\nA:\n");
    for (i = 0; i < n; i++) {
        printf("\n");
        for (j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Printing B
    printf("B:\n");
    for (i = 0; i < n; i++) {
        printf("\n");
        for (j = 0; j < m; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    // Calculation: Addition and Subtraction
    printf("\nSummation (A + B):\n");
    for (i = 0; i < n; i++) {
        printf("\n");
        for (j = 0; j < m; j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    printf("\nSubtraction (A - B):\n");
    for (i = 0; i < n; i++) {
        printf("\n");
        for (j = 0; j < m; j++) {
            d[i][j] = a[i][j] - b[i][j];
            printf("%d ", d[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

