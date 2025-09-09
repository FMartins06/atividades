#include <stdio.h>
int main () {
    float valor_conta;
    float gorjeta;

    scanf("%f %f", &valor_conta, &gorjeta);

    float val_gorjeta = valor_conta * (gorjeta / 100);
    float total_conta = valor_conta + val_gorjeta;

    printf("Valor da gorjeta: R$%.2f\n", val_gorjeta);
    printf("Valor total: R$%.2f", total_conta);
    return 0;
}
