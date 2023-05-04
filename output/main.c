#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "task1.c"
#include "task2.c"
#include "task3.c"
#include "task4.c"
#include "task5.c"

int main() {
    
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int choice;
    printf("¬вед≥ть номер завданн€: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        case 3:
            task3();
            break;
        case 4:
            task4();
            break;
        case 5:
            task5();
            break;
        default:
            printf("¬вед≥ть числа в≥д 0 до 5.\n");
            break;
    }

    return 0;
}