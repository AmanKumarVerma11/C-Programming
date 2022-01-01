#include<stdio.h>

int main()
{
	int n,j,i,a[50],b[50],c[100],k,flag,p;
	printf("Enter the no. of elements : ");
	scanf("%d",&n);
	printf("Enter the elements of set A : ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the elements of set B : ");
    for(j=0;j<n;j++)
    scanf("%d",&b[j]);
    
    printf("Difference A-B :");
    for(i=0;i<n;i++)
    {
    	flag=0;
    	for(j=0;j<n;j++)
    	{
    		if(a[i]==b[j])
    		{
    			flag=1;
    			break;
    		}
    	}
    	if(flag==0)
    	{
    		printf(" %d",a[i]);
    	}
    }
    printf("\n");
    printf("Difference B-A :");
    
    for(i=0;i<n;i++)
    {
    	flag=0;
    	for(j=0;j<n;j++)
    	{
    		if(b[i]==a[j])
    		{
    			flag=1;
    			break;
    		}
    	}
    	if(flag==0)
    	{
    		printf(" %d",b[i]);
    	}
    }
    printf("\n");
    printf("Symmetric Difference:");
    {
    	k=0;
        for(i=0;i<n;i++)
        {
        	flag=0;
    	    for(j=0;j<n;j++)
    	    {
    	    	if(a[i]==b[j])
    	    	{
    	    		flag=1;
    	    		break;
    	    	}
    	    }
    	    if(flag==0)
    	    {
    	    	c[k]=a[i];
    	    	k++;
    	    }
        }
        for(i=0;i<n;i++)
        {
        	flag=0;
        	for(j=0;j<n;j++)
        	{
        		if(b[i]==a[j])
        		{
        			flag=1;
        			break;
        		}
        	}
        	if(flag==0)
        	{
        		c[k]=b[i];
        		k++;
        	}
        }
        for(i=0;i<k;i++)
        {
        	printf(" %d",c[i]);
        }
        printf("\n");
    }
}