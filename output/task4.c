/*ƒано одновим≥рний масив ц≥лих чисел A[i], де i=1,2,Е,n. 
¬изначити: 
a) ск≥льки раз≥в максимальний елемент зустр≥чаЇтьс€ у даному масив≥; 
b) пор€дковий номер першого найб≥льшого елемента; 
c) пор€дковий номер останнього найменшого елемента; 
d) €ких елемент≥в б≥льше Ч максимальних чи м≥н≥мальних.*/

#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <time.h>
#include <math.h>
#include <windows.h>

void task4()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int *array;
    int n, i, max_count = 0, min_count = 0, max, first_max_index, min, last_min_index;

    srand(time(NULL));

    printf("¬вед≥ть к≥льк≥сть елемент≥в:");
    scanf("%d", &n);

    array = (int*)malloc(n * sizeof(int));

    for(i = 0; i < n; i++){
        array[i] = rand() % 20;
    }

    for(i = 0; i < n; i++){
        printf("%d ", array[i]);
    }

    max = array[0];
    min = array[0];
    for(i = 0; i < n; i++){
        if(max < array[i]){
            max = array[i];
            max_count = 1;
            first_max_index = i + 1;
        }
        else if(max == array[i]){
            max_count++;
        }

        if (min > array[i]){
            min = array[i];
            min_count = 1;
            last_min_index = i + 1;
        }
        else if (min == array[i]){
            min_count++;
            last_min_index = i + 1;
        }
    }

    printf("\nmax = %d\nmax_count = %d\nfirst_max_index = %d\n", max, max_count, first_max_index);
    printf("\nmin = %d\nmin_count = %d\nlast_min_index = %d\n", min, min_count, last_min_index);

    if (min_count > max_count){
        printf("Min elements >");
    }
    else if (min_count < max_count){
        printf("Max elements >");
    }
    else{
        printf("ѓхн€ к≥льк≥сть однакова");
    }

    free(array);
}

/*int main (){

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    task4();
    return 0;
}*/