#include<stdio.h>

int main() {
    float priceofDozen, priceofN;
    int n;
    printf("Enter a price for a dozen mangos:");
    scanf("%f", &priceofDozen);
    printf("Enter quantity of mangos:");
    scanf("%d", &n);
    priceofN = priceofDozen / 12 * n;
    printf("Price of %d mangos is %f\n", n, priceofN);
    printf("Samir Adhikari");
    return 0;
}
