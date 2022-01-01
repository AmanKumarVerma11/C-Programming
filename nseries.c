#include<stdio.h>

int main(){
    int n,i,s=0,h=1;
    printf("Enter the value of n= ");
    scanf("%d",&n);
    h=h*i;
    s=s+h;
    for(i=1;i<=n;i++)
    {
        if(i<=n)
        printf("%d + ",i);
        else
        printf("%d = %d",i,s);
    }
return 0;

}