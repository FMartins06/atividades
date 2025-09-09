#include <stdio.h>

int main () {


    int hh, mm, ss;

    scanf("%d:%d:%d", &hh, &mm, &ss);

    int hm = hh * 60;
    int mh = hm + mm;
    int ms = mh * 60;
    int ts = ms + ss;

    printf("La se foram %d segundos que nao voltam mais...", ts);

}
