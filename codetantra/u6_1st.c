#include <stdio.h>
int main()
{
 int n, arr[100],temp[100],count = 0, c, d;
 printf("Enter number of elements in array:");
 //  scanf("%d", &n);
 for (c = 0; c < n; c++)
 {
    printf("arr[%d]: ",c+1);
    scanf("%d",&arr[c]);
 }
 for (c = 0; c < n; c++)
 {
    for (d = 0; d < count; d++)
    {
        if(arr[c] == temp[d])
        break;
    }
    if (d == count)
 }
 {
 temp[count] = arr[c];
 count++;
 }
 }
 printf("Array obtained after removing duplicate elements: ");
 for (c = 0; c < count; c++)
 printf("%d\n", temp[c]);
return 0;
}