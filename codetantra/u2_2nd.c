// Ques: Write a program to find sum of a fibonacci series up to n terms.

#include<stdio.h>

int main()
{
    int i;
    long double a=0,b=1,c,r,s=1;
    printf("Enter the range: ");
    scanf("%Lf",&r);
    for(i=2;i<r;++i)
    {
        c=a+b;
        s+=c;
        a=b;
        b=s;                
    }
    printf("Sum of fibonacci series for given range is: %.Lf\n",s);
}