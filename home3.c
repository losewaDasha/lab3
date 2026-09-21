#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

#define cc 0.3
int main()
{
	setlocale(LC_CTYPE, "RUS");
	int f;
	float lam1;
	puts("Введите число");
	scanf("%d", &f);
	lam1 = cc / f;
	printf("\n---Результаты:---\n");
	printf("При частоте %d ГГц длина волны (в метрах) равна %.4f м\n", lam1);
	printf("При частоте %d ГГц длина волны (в миллиметрах) равна %.2f мм\n", lam1*1000);

}
