// Objective: WAP to find Cartesian product of two sets.

#include<stdio.h>
int main() {
    int a[10],b[10],n1,n2;
    printf("Enter size of set A: ");
    scanf("%d",&n1);
    printf("Enter element of set A:\n");
    for(int i=0;i<n1;i++)
        scanf("%d",&a[i]);
    printf("Enter size of set B: ");
    scanf("%d",&n2);
    printf("Enter element of set B:\n");
    for(int i=0;i<n2;i++)
        scanf("%d",&b[i]);
    printf("The cartesian product of set A and B is: ");
    printf("{");
    for(int i=0;i<n1;i++) {
        for(int j=0;j<n2;j++) {
            printf("(%d %d),",a[i],b[j]);
        }
    }
    printf("}");
    return 0;
}
