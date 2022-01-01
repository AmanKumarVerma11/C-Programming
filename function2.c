// with return type and with argument function type

#include<stdio.h>
int sum(int a,int b)
{
    int s;
    s=a+b;
    return s;
}
void main()
{
    int p,q,c;
    p=5;
    q=8;
    c=sum(p,q);
    printf("The sum of %d and %d is %d",p,q,c);
}