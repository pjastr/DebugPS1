#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[] = {3, 2, 5, -4, 5, 8, 7};
    int *wsk=tab;
    int b = *(wsk+=2); //b=
    int c = b+2; // b=  , c=
    int d = (b/=-4) ^ (c-=-2); // b=  , c=  , d=
    int e = (wsk+=-1)[2]; // b=  , c=  , d=  , e=
    e = (d *= 4) + (c /= 3); // b=  , c=  , d=  , e=
    c = d - (b+=6); // b=  , c=  , d=  , e=
    b = *wsk + e; // b=  , c=  , d=  , e=
    d = b * c % e; // b=  , c=  , d=  , e=
    return 0;
}
