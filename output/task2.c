// Знайти номер останнього максимального значення серед від’ємних елементів, розташованих правіше елемента, рівного Т.
#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <windows.h>

void task2() {

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int *array;
    int n, i, t, t_index, max, flag, t_index_copy;

    printf("Введіть кількість елементів: ");
    scanf("%d", &n);

    array = (int*)malloc(n * sizeof(int));

    for(i = 0; i < n; i++){
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }

    printf("Введіть T: ");
    scanf("%d", &t);

    flag = 0;
    for(i = 0; i < n; i++){
        if (array[i] == t){
            t_index = i + 1;
            flag = 1;
            break;
        }
    }

    if (flag == 1){
        for(t_index_copy = t_index; t_index_copy < n; t_index_copy++){
            if (array[t_index_copy] < 0){
                max = array[t_index_copy];
                break;
            }
        }
        
        for(; t_index < n; t_index++){
            if (array[t_index] > max && array[t_index] < 0){
                max = array[t_index];
            }
        }

        printf("\nmax = %d", max);
    }
    else{
        printf("T is not in the array");
    }
    

    free(array);

}


/*int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    task2();
    return 0;
}*/