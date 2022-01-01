#include<stdio.h>

int main()
{int code=5;
    enum color {red=1,black,white};
    enum color c,c1;
    c=red;
    while(code>c)
    { c++;
         printf("%d",c);
    }
    return 0;
}