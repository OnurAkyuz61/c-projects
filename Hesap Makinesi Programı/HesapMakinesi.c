#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	double sayi1, sayi2, cevap;
	char islem;

	printf("Ilk	Sayiyi Girin:");
	scanf("%lf", &sayi1);

	printf("Ikinci Sayiyi Girin:\n");
	scanf("%lf", &sayi2);

	printf("Yapacaginiz islemi secin (+ - * /):\n");
	scanf("%c", &islem);

	switch (islem)
	{
	case '+':
		cevap = sayi1 + sayi2;
		printf("Cevap = &lf\n", cevap);
		break;
	case '-':
		cevap = sayi1 - sayi2;
		printf("Cevap = &lf\n", cevap);
		break;
	case '*':
		cevap = sayi1 * sayi2;
		printf("Cevap = &lf\n", cevap);
		break;
	case '/':
		cevap = sayi1 / sayi2;
		printf("Cevap = &lf\n", cevap);
		break;
	default:
		printf("&c gecerli bir islem degil", islem);
		break;
	}

	return 0;
}