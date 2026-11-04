#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <windows.h> 
int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    char c;
    printf("Введите символ: ");
    if (scanf(" %c", &c) != 1) {
        return 1;
    }
    switch (c)
    {
    case 'a':
    case 'b':
        printf("Это буква\n");
        break;
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
        printf("Это цифра\n");
        break;
    default:
        printf("Неизвестный символ\n");
        break;
    }
    return 0;
}
