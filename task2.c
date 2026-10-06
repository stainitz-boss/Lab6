#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    //Пример 1: x = 1 F(1) = -6
    //Пример 2: x = 7 F(7) = 12
    //Пример 3: x = 8 F(8) = 0,0167
    //Пример 4: x = 10 F(10) = 0,0104
    setlocale(LC_ALL, "RUS");
    double x;
    printf("Введите x: ");
    scanf("%lf", &x);
    printf("Ответ: F(%.2f) = %.4f\n", x, (x <= 7) ? ((3 * x) - 9) : (1 / ((x * x) - 4)));
    
    return 0;
}