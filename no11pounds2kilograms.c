#include<stdio.h>

int main() {
    float pound, kilogram;
    printf("Enter pounds:");
    scanf("%f", &pound);
    kilogram = pound / 2.2;
    printf("%f pound is equal to %f kilogram.\n", pound, kilogram);
    printf("Samir Adhikari");
    return 0;
}
