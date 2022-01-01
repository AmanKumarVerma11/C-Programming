// Ques: Write a program to print the entire prime no between 1 and n.

#include<stdio.h>

int main()
{
    int n,i,k;
    printf("Enter the number = ");
    scanf("%d",&n);
    for(k=1;k<=n;k++)
    {
        int count=0;
        for(i=2;i<=k/2;i++)
        {
            if(k%i==0)
            {
                count++;
                break;
            }    
        }
        if(count==0 && k!=1)
        printf("%d\t",k);  
    }
    return 0;
}