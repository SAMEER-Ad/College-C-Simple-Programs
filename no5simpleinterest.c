#include<stdio.h>

int main() {
    float p, t, r, i;
    printf("Enter principal, time and rate:");
    scanf("%f%f%f", &p, &t, &r);
    i = (p * t * r) / 100;
    printf("Simple Interest=%f\n", i);
    printf("Samir Adhikari");
    return 0;
}
