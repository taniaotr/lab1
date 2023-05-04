// Задано одновимірний масив А розміру N. Знайти кількість нульових елементів.

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <windows.h>


void task1(){

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int *a;
    int n, i, count = 0;

    printf("Введіть n: ");
    scanf("%d", &n);

    a = (int*)malloc(n * sizeof(int));

    for(i = 0; i < n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        if(a[i] == 0){
            count++;
        }
    }



    printf("\nКількість нульових елементів - %d", count);

    free(a);
}