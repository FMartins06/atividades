#include <stdio.h>
#include <math.h>
int main () {
    int G, S, N;
    scanf ("%d %d %d", &G, &S, &N);
    int GS = (G * 17) + S;
    int NT = (GS * 29) + N;
    printf("O bruxo possui %d Nuques", NT);
    return 0;
}
