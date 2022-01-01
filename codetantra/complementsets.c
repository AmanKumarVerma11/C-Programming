#include<stdio.h>
int main()
{
	int a[20],b[20],c[40],n,m,i,j,flag=0;
	printf("Enter the number of elements of A: ");
	scanf("%d",&n);
	printf("Enter the number of elements of B: ");
	scanf("%d",&m);
	printf("Enter the elements of A: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the elements of B: ");
	for(j=0;j<m;j++)
	{
		scanf("%d",&b[j]);
	}
	printf("The complement is :");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i]==b[j])
			{
				flag++;
			}
		}
		if(flag==0)
		printf(" %d",a[i]);
		flag=0;
	}
	printf("\n");
}