#include <stdio.h>
    int main () {
    int D;
    int MC;
    int MT;
    int eld = 12;
    int emc = 9;
    int emt = 2;
    scanf("%d %d %d", &D, &MC, &MT);
    int tld = D * eld;
    int tlmc = MC * emc;
    int tlmt = MT * emt;
    int total = tld + tlmc + tlmt;
    printf ("Você economizou %d litros de água", total);
        return 0;
}
