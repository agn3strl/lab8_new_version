#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	system("chcp 1251");

    int n;
    double a;
    puts("Введите число a:");
    scanf("%lf", &a);
    puts("Введите число n:");
    scanf("%d", &n);

    double d = a;
    double res = 1. / a;

    for (int i = 1; i <= n; i++)
    {
		d *= a + i;
        res += 1. / d;
    }

    printf("Результат равен %lf", res);

	return 0;
}
