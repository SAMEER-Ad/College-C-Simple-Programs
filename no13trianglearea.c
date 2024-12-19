#include<stdio.h>
#include<math.h>

int main() {
    float a, b, c, s, area;
    
    // Input
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Semi-perimeter calculation
    s = (a + b + c) / 2;

    // Area calculation using Heron's formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Output
    printf("The area of the triangle is: %.2f\n", area);
    printf("Samir Adhikari\n");

    return 0;
}

