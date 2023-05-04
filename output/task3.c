//Задано масив дійсних чисел ?? ?? , ?? ? 200. Розробити програму, яка будує масив ?? ?? за правилом: ???? є середнім арифметичним значенням чисел ??1 , ??2 , … , ???? , крім ???? , ?? = 1,2, … , ??.

#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <time.h>
#include <windows.h>

void task3(){

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
 
    float *array, *b;   
    int n, i, j;
    float average, suma;

    srand(time(NULL));

    printf("Введіть кількість елементів: ");
    scanf("%d", &n);

    if (n <= 200) {

    array = (float*)malloc(n * sizeof(float));
    b = (float*)malloc(n * sizeof(float));

    for(i = 0; i < n; i++){
        array[i] = rand() % 20;
    }

    for(i = 0; i < n; i++){
        printf("%.2f ", array[i]);
    }

    for(i = 0; i < n; i++){
        suma = 0;
        for(j = 0; j < n; j++){
            if (i != j){
                suma += array[j];
            }
        }
        average = suma / (n - 1);
        printf("\naverage = %.2f", average);
        b[i] = average;
    }

    printf("\n");


    free(b);
    free(array);
    }

    else{
        printf("\nerror n > 200");
    }
}



/*int main (){

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    task3();
    return 0;
}*/