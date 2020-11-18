#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	double n, a, b, c, d, e, dr;
	scanf_s("%lf", &n);
	a = 1;
	b = 1;
	c = 1;
	d = 0;
	dr = 0;
	e = 0;
	for (int i = 1; i <= n; i++)
	{
		a = a * 2;
	}
	for (int j = 1; j <= n; j++)
	{
		b = b * j;
	}
	for (int k = 1; k <= n; k++)
	{
		c = c * (1 + 1 / (n * n));
	}
	for (int l = 1; l <= n; l++)
	{
		dr = dr + sin(l);
		d = d + 1 / dr;
	}
	for (int w = 1; w <= n; w++)
	{
		e += 2;
		e = sqrtf(e);
	}
	printf("\nA) %lf\nÁ) %lf\nÂ) %lf\nÃ) %lf\nÄ) %lf", a, b, c, d, e);
	_getch();
	return 0;
}
