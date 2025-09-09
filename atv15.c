#include <stdio.h>
#include <math.h>
int main () {
    float raio;
    float pi = 3.14159;
    scanf("%f", &raio);
    float diam = 2 * raio;
    float area = pi * (raio * raio);
    float peri = 2 * pi * raio;
    printf("%.2f\n%.2f\n%.2f", diam, area, peri);
    return 0;
}
