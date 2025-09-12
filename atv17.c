#include <stdio.h>

int main(){

    int a, b;
    int a1, b1;
    int a2, b2;
    int a3, b3;
    int a4, b4;

    int maiorAB(int a, int b){
    if(a > b)
        return a;
    else
        return b;
}
    scanf("%d %d", &a, &b);
    scanf("%d %d", &a1, &b1);
    scanf("%d %d", &a2, &b2);
    scanf("%d %d", &a3, &b3);
    scanf("%d %d", &a4, &b4);

    printf("%d\n", maiorAB(a, b));
    printf("%d\n", maiorAB(a1, b1));
    printf("%d\n", maiorAB(a2, b2));
    printf("%d\n", maiorAB(a3, b3));
    printf("%d\n", maiorAB(a4, b4));
    return 0;
}
