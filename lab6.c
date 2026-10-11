#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>

int main() 
{
    setlocale(LC_ALL, "RUS");
    int N;
    int flag = 0; // есть 5 или нет, по умолчанию нет

    printf("Введите число N (N < 1000): ");
    scanf("%d", &N);

    if (N >= 100) // сотни
    { 
        if (N / 100 == 5) 
        {
            flag = 1;
        }
    }

    if ((N / 10) % 10 == 5) // десятки
    { 
        flag = 1;
    }

    if (N % 10 == 5) // единицы
    { 
        flag = 1;
    }
    if (N < 1000)
    {
        if (flag == 1)
        {
            printf("Цифра 5 входит в число N = %d\n", N);
        }
        else
        {
            printf("Цифра 5 не входит в число N = %d\n", N);
        }
    }

    else
    {
        printf("Неизвестное число N\n");
    }

    return 0;
}
