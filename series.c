//this program prints the sum of first n numbers in series
#include<stdio.h>
int main(){
    int n,i;
    int sum=0;
    printf("Enter the n i.e. max values of series : ");
    scanf("%d",&n);                                             //taking input
    printf("Sum of the series : ");
    for(i =1;i <= n;i++){                                       //printing series and summing up one by one & printing result
        sum = sum + i;
         if (i!=n) 
             printf("%d + ",i);
         else
             printf("%d = %d ",i,sum);
         }
         return 0;
}
