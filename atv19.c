#include <stdio.h>

int main () {


    int D1, D2, D3;

    scanf("%d %d %d", &D1, &D2, &D3);

    int a1 = D1 / 360;
    int ra1 = D1 % 360;
    int m1 = ra1 / 30;
    int rd1 = ra1 % 30;

    printf("%01d ano(s), %01d mes(es) e %01d dia(s)\n", a1, m1, rd1);

    int a2 = D2 / 360;
    int ra2 = D2 % 360;
    int m2 = ra2 / 30;
    int rd2 = ra2 % 30;

    printf("%01d ano(s), %01d mes(es) e %01d dia(s)\n", a2, m2, rd2);

    int a3 = D3 / 360;
    int ra3 = D3 % 360;
    int m3 = ra3 / 30;
    int rd3 = ra3 % 30;

    printf("%01d ano(s), %01d mes(es) e %01d dia(s)\n", a3, m3, rd3);

}
