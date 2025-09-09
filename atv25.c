#include <stdio.h>
#include <math.h>
int main () {
    double X, Y, Z;
    scanf("%lf %lf %lf", &X, &Y, &Z);
    double XYZ = X + Y + Z;
    double nX = pow(X, 0);
    double nY = pow(Y, 0);
    double nZ = pow(Z, 0);
    double ntotal = nX + nY + nZ;
    double media = XYZ / ntotal;
    printf("%.2lf", media);
}
