#include<stdio.h>

int main() {
    float c, f;
    printf("Enter temperature in Celsius:");
    scanf("%f", &c);
    f = c * 9 / 5 + 32;
    printf("Converted temperature in Fahrenheit=%f\n", f);
    printf("Samir Adhikari");
    return 0;
}
