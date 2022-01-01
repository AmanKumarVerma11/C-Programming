#include<stdio.h>

int main()
{
	int flag=0,i,j,n1,n2,A[50],B[50],C[100];
	printf("Enter the total elements in set A : ");
	scanf("%d",&n1);
	printf("Enter elements of set A : ");
	for(i=0;i<n1;i++)
	scanf("%d",&A[i]);
	printf("Enter the total elements in set B : ");
	scanf("%d",&n2);
	printf("Enter elements of set B : ");
	for(j=0;j<n2;j++)
	scanf("%d",&B[j]);

	printf("A-B set is :");
	for(i=0;i<n1;i++)
	{
		flag=0;
		for(j=0;j<n2;j++)
		{
			if(A[i]==B[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		printf(" %d",A[i]);
	}
	printf("\n");
	return 0;	
}