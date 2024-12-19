#include<stdio.h>

int main() {
    float l, b, a, p;
    printf("Enter length and breadth:");
    scanf("%f%f", &l, &b);
    a = l * b;
    p = 2 * (l + b);
    printf("Area of rectangle=%f\n", a);
    printf("Perimeter of rectangle=%f\n", p);
    printf("Samir Adhikari");
    return 0;
}
