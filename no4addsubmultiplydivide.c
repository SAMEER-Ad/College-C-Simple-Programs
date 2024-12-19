#include<stdio.h>

int main() {
    int a, b, c;
    float d;
    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("Sum=%d\n", c);
    c = a - b;
    printf("Difference=%d\n", c);
    c = a * b;
    printf("Product=%d\n", c);
    d = (float)a / b;
    printf("Division=%f\n", d);
    printf("Samir Adhikari");
    return 0;
}
