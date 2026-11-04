#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <windows.h>           
#include <math.h>              
int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    float x, y;
    char c;
    printf("Введите выражение (например, 5.5+2 или 2^3):");
    if (scanf("%f%c%f", &x, &c, &y) != 3) {
        printf("Ошибка ввода! Неверный формат.\n");
        return 1;
    }
    switch (c)
    {
    case '+':
        printf("=%f\n", x + y);
        break;

    case '-':
        printf("=%f\n", x - y);
        break;

    case '*':
        printf("=%f\n", x * y);
        break;

    case '/':
        if (y == 0.0f) {
            printf("Ошибка: деление на ноль!\n");
        }
        else {
            printf("=%f\n", x / y);
        }
        break;
    case '^':
        printf("=%f\n", pow(x, y));
        break;
    default:
        printf("Ошибка: неизвестная операция '%c'\n", c);
        break;
    }
    return 0;
}
