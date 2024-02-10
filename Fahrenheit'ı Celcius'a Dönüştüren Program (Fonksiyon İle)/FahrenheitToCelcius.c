#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

float toCelcius(float fahrenheit) {
	return ((5.0 / 9.0) * (fahrenheit - 32.0));
}

int main(){
	float f_value;
	
	printf("Sicaklik degerini fahrenheit olarak girin:");
	scanf("%f", &f_value);

	float result = toCelcius(f_value);

	printf("Fahrenheit: %.2f\n", f_value);

	printf("Fahrenheit'i Santigrat'a dönü?tür: %.2f\n", result);

	return 0;
}