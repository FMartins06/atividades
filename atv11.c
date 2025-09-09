#include <stdio.h>
#include <math.h>
int main () {
    float celsius;
    float fahrenheit;
    scanf("%f", &celsius);
    fahrenheit = (celsius * 1.8) + 32;
    printf("%.1f", fahrenheit);
    return 0;
}
