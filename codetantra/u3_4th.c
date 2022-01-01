// Ques: Write a program to receive a five digit no and display as like 24689
//Example: Enter·a·number:·24689
//         24689
//         4689
//         689
//         89
//         9

#include<stdio.h>

int main()
{
    int i,k,n,r,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=count;i--)
    {
        // finding reverse
        while(n!=0)
        {
            r=n%10;
            count--;
            n=n/10;
        }
        // for(k=1;k<=i;k++)
        // printing of number
        while(count!=0)
        {
            // for(r=1;r<=i;r++)
            r=count%10;
            count=count/10;
            printf("%d\n",r);
        }
    }    
    return 0;
}