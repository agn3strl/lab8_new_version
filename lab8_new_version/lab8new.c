#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	system("chcp 1251");

    int n;
    double a;
    puts("¬ведите число a:");
    scanf("%lf", &a);
    puts("¬ведите число n:");
    scanf("%d", &n);

    double d = a;
    double res = 1. / a;

    for (int i = 1; i <= n; i++)
    {
        if (a + i == 0) puts("Cумма параметров не должна быть равна нулю");
        else
        {
            d *= a + i;
            res += 1. / d;
        }
    }

    printf("–езультат равен %lf", res);

	return 0;
}