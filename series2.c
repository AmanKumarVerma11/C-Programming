#include<stdio.h>
int main()
{
 int n,i,j,s=0;//variables
 printf("Enter the last number of series: ");
 scanf("%d",&n);//last number of series
 for(i=1;i<=n;i++)//loop for finding factorial and sum
 {
 int f=1;//variable
 if(i!=n)
 printf("%d!+ ",i);
 else
 printf("%d!= ",i);
 for(j=1;j<=i;j++)
 f=f*j;
 s=s+f;
 }
 printf("%d",s);
 return 0;
}