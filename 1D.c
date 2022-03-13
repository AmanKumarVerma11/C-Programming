#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int sum=0;
    int n,i;
    int *arr = (int*)malloc(n*sizeof(int));
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++) {
        sum += arr[i];
    }
    printf("%d\n",sum);
    free(arr);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
}