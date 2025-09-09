#include <stdio.h>
int main () {
    int idd_anos;
    int idd_meses;
    int idd_dias;
    scanf("%d %d %d", &idd_anos, &idd_meses, &idd_dias);
    int anos_dias = idd_anos * 360;
    int meses_dias = idd_meses * 30;
    int total_dias = anos_dias + meses_dias + idd_dias;
    printf("Voce ja viveu %d dias", total_dias);
    return 0;
}
