/*  Ques: Write a program to find the value of y for a particular value of n.
The a, x, b, n are input by the user
If n=1 y=ax%b,
if n=2 y=ax^2+b^2,
if n=3 y=a-bx,
if n=4 y=a+x/b.  */

#include<stdio.h>

int main()
{
    int a,x,b,n,y;
    printf("Enter the value of a, x and b:");
    scanf("%d %d %d",&a,&x,&b);
    printf("Enter the value of n to calculate y:");
    scanf("%d",&n);
    if(n==1)
    {
        y=(a*x)%b;
        printf("The value of y is=%d",y);
    }
    else if(n==2)
    {
        y=(a*x*x)+(b*b);
        printf("The value of y is=%d",y);
    }
    else if(n==3)
    {
        y=a-(b*x);
        printf("The value of y is=%d",y);
    }
    else if(y==4)
    {
        y=a+(x/b);
        printf("The value of y is=%d",y);
    }
   return 0;
}