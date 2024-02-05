#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main() {
    // Değişkenleri tanımla
    char unit;
    float temp;

    // Kullanıcıdan sıcaklık birimini al
    printf("\nSicaklik birimini giriniz (F) veya (C):");
    scanf("%c", &unit);

    //Büyük - Küçük Harf duyarlılığını engelle
    unit = toupper(unit);

    // Girilen birim Celsius ise
    if (unit == 'C') {
        // Celsius cinsinden sıcaklığı al
        printf("\nCelcius cinsinden sicakligi giriniz: ");
        scanf("%f", &temp);
        // Sıcaklığı Fahrenheit'a çevir
        temp = (temp * 9 / 5) + 32;
        // Fahrenheit cinsinden sıcaklığı ekrana yazdır
        printf("\nSicaklik fahreneit cinsinden: %.1f", temp);
    }
    // Girilen birim Fahrenheit ise
    else if (unit == 'F') {
        // Fahrenheit cinsinden sıcaklığı al
        printf("\nFahreneit cinsinden sicakligi giriniz: ");
        scanf("%f", &temp);
        // Sıcaklığı Celsius'a çevir
        temp = ((temp - 32) * 5) / 9;
        // Celsius cinsinden sıcaklığı ekrana yazdır
        printf("\nSicaklik Celsius cinsinden : %.1f", temp);
    }
    // Geçersiz bir birimse
    else {
        // Hata mesajını ekrana yazdır
        printf("\n %c gecerli bir birim degil", unit);
    }
    return 0;
}