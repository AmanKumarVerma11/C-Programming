// Objective: WAP in c to perform the power set operation on a set.

#include <stdio.h>
#include <math.h>
void printPowerSet(int *set, int set_size)
{
 unsigned int pow_set_size = pow(2, set_size);
 int counter, j;
 printf("Power Set :");
 for(counter = 0; counter < pow_set_size; counter++)
 {
 for(j = 0; j < set_size; j++)
 {
 if(counter & (1<<j))
 printf("%d", set[j]);
 }
 printf("\n");
 }
}
int main() {   //char set[] = {'a','b','c'};
    int set[10];
    int n1;
    printf("Enter size of set : ");
    scanf("%d",&n1);
    printf("Enter element of set :\n");
    for(int i=0;i<n1;i++) {
        scanf("%d",&set[i]);
    }
    printPowerSet(set, n1);
    return 0;
}
