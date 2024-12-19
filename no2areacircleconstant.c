#include<stdio.h>
#define PI 3.14

int main() {
    float radius, area;
    printf("Enter a radius of a circle:");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("Area of circle=%f\n", area);
    printf("Samir Adhikari");
    return 0;
}
