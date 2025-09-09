#include <stdio.h>

int main () {

    float alt;
    scanf("%f", &alt);

    float pih = (72.7 * alt) - 58;
    float pim = (62.1 * alt) - 44.7;

    printf("%.2f %.2f", pih, pim);
    return 0;
}
