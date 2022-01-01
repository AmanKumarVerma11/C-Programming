#include<stdio.h>
#include<math.h>
int main(){
    long int n,i,x,j,s=1,f=1,sign=1;
    printf("Enter the value of n= ");
    scanf("%ld",&n);
    printf("Enter the value of x= ");
    scanf("%ld",&x);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            f=f*i;
        }
        sign=sign*(-1);
        s=s-sign*pow(x,i)/f;
        f=1;
    }
    printf("The sum of the series = %ld",s);
    return 0;
    
}


