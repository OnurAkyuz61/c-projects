#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
    // Dik kenarların uzunluklarını kullanıcıdan al
    double kenar1, kenar2, hipotenus;

    printf("Birinci dik kenarin uzunlugunu yazin:");
    scanf("%lf", &kenar1);

    printf("İkinci dik kenarin uzunlugunu yazin:");
    scanf("%lf", &kenar2);

    // Hipotenüsü hesapla
    hipotenus = sqrt((kenar1 * kenar1) + (kenar2 * kenar2));

    // Hipotenüs uzunluğunu ekrana yazdır
    printf("Hipotenus Uzunlugu: %.1lf", hipotenus);

    return 0;
}