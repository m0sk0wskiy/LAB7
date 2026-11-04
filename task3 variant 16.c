#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <windows.h>           
#include <conio.h>            

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    char c;
    printf("Нажмите любую цифровую клавишу (0-9): ");
    c = _getch();
    switch (c)
    {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        printf("\nВы нажали цифровую клавишу: %c\n", c);
        break;
    default:
        printf("\nОшибка: нажатая клавиша '%c' не является цифрой.\n", c);
        break;
    }
    printf("\nНажмите любую клавишу для выхода...");
    _getch();

    return 0;
}
