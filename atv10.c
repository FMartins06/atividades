#include <stdio.h>
#include <math.h>
int main () {
    double denominador;
    double expoente;
    double resultado;
    scanf("%lf %lf", &denominador, &expoente);
    resultado = pow(denominador, expoente);
    printf("%.1lf", resultado);
    return 0;
}
