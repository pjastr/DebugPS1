#include <stdio.h>
#include <stdlib.h>

int foo(int*a,int*b)
{
    return *a-*b;
}

int main()
{
    int tab[] = {-3,1,-2,0,2,-3,0,-2,3,9,1,0,2};
    int *wsk=tab-1;
    int b = *(wsk+=4); //b=
    int c = b+4; // b=  , c=
    int d = foo(&b,&c); // b=  , c=  , d=
    int e = (wsk+=-1)[3]; // b=  , c=  , d=  , e=
    e = (d -= 2) - (c += 2); // b=  , c=  , d=  , e=
    c = d + (b+=4); // b=  , c=  , d=  , e=
    b = *wsk + e; // b=  , c=  , d=  , e=
    b= (--c)-(d++);  // b=  , c=  , d=  , e=
    return 0;
}
