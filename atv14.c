#include <stdio.h>
#include <math.h>
int main () {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float pa = a * 1.1;
    float pb = b * 1.1;
    float pc = c * 1.1;
    float total = pa + pb + pc;
    printf("%.2f %.2f %.2f\n%.2f", pa, pb, pc, total);
    return 0;
}
