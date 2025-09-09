#include <stdio.h>
int main () {
   char c;
    scanf("%c", &c);
    printf("%c\n", c);
    printf("%c%c\n", c, c);
    printf("%c %c\n", c, c);
    printf("2%c\n", c);
    printf("[%c]\n", c);
    return 0;
}
