#include <stdio.h>
#include <stdlib.h>

int foo(int*a,int*b)
{
    if (*a>*b)
        return *a;
    return *b;
}

int main()
{
    int tab[] = {1,2,3,4,5,6,7,8,9};
    int *wsk=tab-1;
    int b = *(wsk+=3); //b=
    int c = b+3; // b=  , c=
    int d = foo(&b,&c); // b=  , c=  , d=
    int e = (wsk+=1)[2]; // b=  , c=  , d=  , e=
    b = (c += 8) + (e -= 3); // b=  , c=  , d=  , e=
    e = (d *= 8) + (c /= 3); // b=  , c=  , d=  , e=
    c = d - (b+=8); // b=  , c=  , d=  , e=
    b = *wsk + e; // b=  , c=  , d=  , e=
    return 0;
}
