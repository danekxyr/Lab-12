/*
 * Студент: Пылинский Даниил Максимович
 * Группа: ПИ 1-1
 * Лабораторная работа № 12
 * Назначение: Самостоятельная работа. Упорядочивание пары чисел по неубыванию через order_pair
 */

#include <stdio.h>

void order_pair(int *a, int *b) {
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main(void) {
    int x1 = 7, y1 = 4;
    order_pair(&x1, &y1);
    printf("%d %d\n", x1, y1);

    int x2 = -2, y2 = 0;
    order_pair(&x2, &y2);
    printf("%d %d\n", x2, y2);

    int x3 = 5, y3 = 5;
    order_pair(&x3, &y3);
    printf("%d %d\n", x3, y3);

    int x4 = 6, y4 = 5;
    order_pair(&x4, &y4);
    printf("%d %d\n", x4, y4);

    return 0;
}
