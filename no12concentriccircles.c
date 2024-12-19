#include<stdio.h>

int main() {
    float r, R, area;
    const float PI = 3.14;
    printf("Enter radius of small circle:");
    scanf("%f", &r);
    printf("Enter radius of big circle:");
    scanf("%f", &R);
    area = PI * (R * R - r * r);
    printf("Area between concentric circles=%f\n", area);
    printf("Samir Adhikari");
    return 0;
}
