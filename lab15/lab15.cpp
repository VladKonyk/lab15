#include <stdio.h>

#define MAX_SIZE 100
int main() {
    int option;
    printf_s("Оберіть завдання 1-7: ");
    scanf_s("%d", &option);
    switch (option) {
        case 1: {
            int a, b;
            printf_s("Введіть два числа: ");
            scanf_s("%d%d", &a, &b);
            if (a > b) {
                printf_s("Перше число більше другого: %d", a);
            }
            else {
                printf_s("Перше число не більше другого: %d %d", a, b);
            }
        }
        break;
        case 2: {
            int a, b, c;
            printf_s("Введіть три числа: ");
            scanf_s("%d%d%d", &a, &b, &c);
            if (a == b && b == c) {
                printf_s("Введено однакові числа");
            }
            else {
                int minNum = a;
                if (minNum > b) {
                    minNum = b;
                    }
                if (minNum > c) {
                    minNum = c;
                }
                printf_s("Найменше число: %d", minNum);
            }
        }
        break;
        case 3: {
            int myArray[MAX_SIZE];
            int size;

            printf_s("Введіть розмір масиву (не більше %d): ", MAX_SIZE);
            scanf_s("%d", &size);

            printf_s("Введіть елементи масиву:\n");
            for (int i = 0; i < size; i++) {
                printf_s("myArray[%d]: ", i);
                scanf_s("%d", &myArray[i]);
            }
            for (int i = 0; i < size; i++) {
                if (myArray[i] % 2 == 0) {
                    myArray[i] = 0;
                }
                printf_s("%d ", myArray[i]);
            }
        }
        break;
        case 4: {
            int myArray[MAX_SIZE];
            int size;
            int sum = 0;

            printf_s("Введіть розмір масиву (не більше %d): ", MAX_SIZE);
            scanf_s("%d", &size);

            printf_s("Введіть елементи масиву:\n");
            for (int i = 0; i < size; i++) {
                printf_s("myArray[%d]: ", i);
                scanf_s("%d", &myArray[i]);
            }
            for (int i = 0; i < size; i++) {
                sum += myArray[i];
            }
            printf_s("Сума елементів масиву: %d", sum);
        }
        break;
        case 5: {
            int myArray[MAX_SIZE];
            int size;

            printf_s("Введіть розмір масиву (не більше %d): ", MAX_SIZE);
            scanf_s("%d", &size);

            printf_s("Введіть елементи масиву:\n");
            for (int i = 0; i < size; i++) {
                printf_s("myArray[%d]: ", i);
                scanf_s("%d", &myArray[i]);
            }
            for (int i = size-1; i >= 0; i--) {
                printf_s("%d ", myArray[i]);
            }
        }
        break;
        case 6: {
            int myArray[MAX_SIZE];
            int size;

            printf_s("Введіть розмір масиву (не більше %d): ", MAX_SIZE);
            scanf_s("%d", &size);

            printf_s("Введіть елементи масиву:\n");
            for (int i = 0; i < size; i++) {
                printf_s("myArray[%d]: ", i);
                scanf_s("%d", &myArray[i]);
            }
            int min = myArray[0];
            int max = myArray[0];
            for (int i = 1; i < size; i++) {
                if (myArray[i] < min) {
                    min = myArray[i];
                }
                if (myArray[i] > max) {
                    max = myArray[i];
                }
            }
            printf_s("Мінімальний елемент: %d\n", min);
            printf_s("Максимальний елемент: %d", max);
        }
        break;
        case 7: {
            int myArray[MAX_SIZE];
            int size;
            int res = 0;
            int resArray[MAX_SIZE];
            printf_s("Введіть розмір масиву (не більше %d): ", MAX_SIZE);
            scanf_s("%d", &size);

            printf_s("Введіть елементи масиву:\n");
            for (int i = 0; i < size; i++) {
                printf_s("myArray[%d]: ", i);
                scanf_s("%d", &myArray[i]);
            }
            for (int i = 0; i < size; i++) {
                res += myArray[i];
                resArray[i] = res;
                printf_s("%d ", resArray[i]);
            }
        }
        break;
        default:
            printf_s("Невірний вибір опції.\n");
        break;
    }
    return 0;
}