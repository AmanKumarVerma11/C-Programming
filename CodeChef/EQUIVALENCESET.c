#include<stdio.h>

int main()
{
	int n,i,j,a[10],b[10][10]={0};
	printf("Enter the number of elements in set: ");
	scanf("%d",&n);
	printf("Enter the elements of Array: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Relation :{ ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]%2==0 && a[j]%2==0)
			{
				printf("(%d,%d) ",a[i],a[j]);
				b[i][j]=1;
			}
			if(a[i]%2!=0 && a[j]%2!=0)
			{
				printf("(%d,%d) ",a[i],a[j]);
				b[i][j]=1;
			}
		}
	}
	printf("}\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("1. Relation is symmetric\n2. Relation is reflexive\n3. Relation is transitive\n");
}