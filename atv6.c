#include <stdio.h>
int main () {
    int custo_total;
    int valor_atual;
    int meses_falt;
    scanf("%d %d %d", &custo_total, &valor_atual, &meses_falt);
    int valor_falt = custo_total - valor_atual;
    int valorpm_falt = valor_falt / meses_falt;
    printf("Voce precisa economizar R$%d.00 por mes", valorpm_falt);
    return 0;
}
