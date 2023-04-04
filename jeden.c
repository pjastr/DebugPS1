#include <stdio.h>
#include <stdlib.h>

void foo(int* tab, int n)
{
    for(int i=0;i<n-2;i++)
    {
        *(tab+i)+=4;
    }
}

int main()
{
    int tab[] = {3,4,1,-2,-3,4,2,0,5,2,9,8};
    int *wsk=tab;
    foo(wsk,5);
    int b = *(wsk+=4); //b=
    int c = b+2; // b=  , c=
    int d = b+c; // b=  , c=  , d=
    int e = (wsk+=-1)[2]; // b=  , c=  , d=  , e=
    e = (d -= 3) * (c += 3); // b=  , c=  , d=  , e=
    c = d - (b+=2); // b=  , c=  , d=  , e=
    b = *wsk + e; // b=  , c=  , d=  , e=
    e = (++d)+(b--); // b=  , c=  , d=  , e=
    return 0;
}
