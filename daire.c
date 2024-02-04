#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    // Dairenin yarıçapını ve hesaplanan alan, çevre değerlerini saklamak için değişkenleri tanımla
    double yaricap, alan, cevre;
    // Sabit pi sayısını tanımla
    const double pi = 3.14;

    // Kullanıcıdan yarıçapı al
    printf("Dairenin Yaricapini Yazin:");
    scanf("%lf", &yaricap);

    // Dairenin alanını ve çevresini hesapla
    alan = pi * yaricap * yaricap;
    cevre = 2 * pi * yaricap;

    // Hesaplanan değerleri ekrana yazdır
    printf("Dairenin cevresi %.1lf\n", cevre);
    printf("Dairenin alani %.1lf\n", alan);

    return 0;
}
