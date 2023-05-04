//Дано прямокутну цілочислову таблицю порядку 10*n. Визначити середнє арифметичне максимального та мінімального її значень.

#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <windows.h>


void getMemoryMatrix(int*** matrix, int rows, int cols) {
    int i;

    *matrix = (int**)malloc(rows * sizeof(int*));

    for (i = 0; i < rows; i++) {
        (*matrix)[i] = (int*)malloc(cols * sizeof(int));
    }
}

void freeMatrix(int** matrix, int rows) {
    int i;

    for (i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

void randomMatrix(int** matrix, int rows, int cols) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 10;
        }
    }
}

void printMatrix(int** matrix, int rows, int cols) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void averageMatrix(int** matrix, int rows, int cols) {
    int i, j;
    float min = matrix[0][0], max = matrix[0][0];
    float average = 0;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (max < matrix[i][j]){
                max = matrix[i][j];
            }
            if (min > matrix[i][j]){
                min = matrix[i][j];
            }
        }
    }

    printf("\nmax = %.2f", max);
    printf("\nmin = %.2f", min);
    average = ((max + min) / 2);

    printf("\nСереднє арифметичне - %.2f", average);

}

void task5()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int** matrix;
    int m, n;

    printf("Введіть n: ");
    scanf("%d", &n);
    printf("Введіть m: ");
    scanf("%d", &m);

    getMemoryMatrix(&matrix, n, m);

    randomMatrix(matrix, n, m);
    printMatrix(matrix, n, m);

    averageMatrix(matrix, n, m);


    freeMatrix(matrix, n);
    
}

/*int main (){

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    task5();
    return 0;
}*/