#include <stdio.h>
int main(){
    float peso, altura;
    scanf("%f %f", &peso, &altura);
    float IMC = peso / (altura * altura);
    printf("Seu IMC é: %.2f", IMC);
    return 0;
}
