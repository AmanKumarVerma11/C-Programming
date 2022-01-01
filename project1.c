#include <stdio.h>

int main(){
    int l,b,a;
    printf("Length= \n");
    scanf("%d",&l);

    printf("Breadth= \n");
    scanf("%d",&b);

    a=l*b;
    printf("The area of the rectangle is %d",a);
    
    return 0;
}