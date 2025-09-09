#include <stdio.h>
int main(){
    char X;
    char Y;
    char Z;
    scanf("%c %c %c", &X, &Y, &Z);
    printf("%c%c%c\n", X, Y, Z);
    printf("%c\n", X);
    printf("%c%c\n", Y, Y);
    printf("%c %c %c\n", Z, Z, Z);
    printf("X == %c, Y == %c, Z == %c\n", X, Y, Z);
    printf("X != %c, Y != %c, Z == %c", Y, X, Z);
}
