#include <stdio.h>
int main () {
    float n1, n2, n3;
    int p1, p2, p3;
    scanf("%f %f %f", &n1, &n2, &n3);
    scanf("%d %d %d", &p1, &p2, &p3);
    float np1 = n1 * p1;
    float np2 = n2 * p2;
    float np3 = n3 * p3;
    int ptotal = p1 + p2 + p3;
    float nptotal = np1 + np2 + np3;
    float media = nptotal / ptotal;
    printf("%f", media);
}
