#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    float x, y;
    float r_squared;

    printf("Введите координату x: ");
    scanf("%f", &x);
    printf("Введите координату y: ");
    scanf("%f", &y);

    r_squared = x * x + y * y;

    if (r_squared >= 1 && r_squared <= 9)
    {
        printf("Точка (%.2f, %.2f) принадлежит области.\n", x, y);
        
        if (r_squared == 1 || r_squared == 9)
        {
             printf("(Точка находится на границе области)\n");
        }
    }
    else
    {
        printf("Точка (%.2f, %.2f) не принадлежит области.\n", x, y);
    }

    return 0;
}
