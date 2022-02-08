#include <stdio.h>

static const char *arr[] = {"one","two","three","four","five","six","seven","eight","nine"};
int main()
{
    int n = 0;
    if (scanf("%d",&n) < 1)
        return 1;
    
    if (n >= 1 && n <= 9)
        printf("%s",arr[n-1]);
    else
        printf("Greater than 9");
    
    return 0;
}