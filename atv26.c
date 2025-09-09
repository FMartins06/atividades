#include <stdio.h>
int main () {
    int S;
    scanf("%d", &S);
    int h = S / 3600;
    int hm = S % 3600;
    int min = hm / 60;
    int seg = hm % 60;
    printf("%01dh %02dm %02ds", h, min, seg);
}
