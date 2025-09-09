#include <stdio.h>
#include <math.h>
int main () {
    float celsius;
    float zork;
    scanf("%f", &celsius);
    zork = (celsius * 3) - 15;
    printf("%.0f graus Celsius equivalem a %.0f graus Zork",celsius, zork);
    return 0;
}
