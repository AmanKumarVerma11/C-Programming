/*  Ques: Write a program to draw the number pyramid up to the given number n. Print the output as shown in the sample test cases
For example
If n = 3
then it should print the output as below
3 2 1
2 1
1       */

#include<stdio.h>

int main()
{
    int i,j,n;
    printf("Eter the number of rows :");
    scanf("%d",&n);
    for(i=n;i>=1;--i)
    {
        for(j=i;j>=1;--j)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}


