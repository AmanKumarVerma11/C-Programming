#include <stdio.h>

void print_upper_part( int n )
{
    int i,j,k,m;
    
    for( i = n; i >= 1 ; i-- ){
        
        for( j = n; j >= i; j-- ){
            printf("%d ",j);
        }
        
        j++;
        
        for( k = 1; k <= (2*j) - 3; k++  ){
            printf("%d ",j);
        }
        
        j = j == 1 ? 2 : j;
        
        for( m = j; m <= n; m++ ){
            printf("%d ",m);
        }
        printf("\n");
    }
}

void print_lower_part( int n )
{
    int i,j,k,m;
    
    for( i = 2; i <= n ; i++ ){
        
        for( j = n; j >= i; j-- ){
            printf("%d ",j);
        }
        
        j++;
        
        for( k = 1; k <= (2*j) - 3; k++ ){
            printf("%d ",j);
        }
    
        for( m = i; m <= n; m++ ){
            printf("%d ",m);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    print_upper_part(n);
    print_lower_part(n);

    return 0;
}

/* method 2:
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int len = n*2 - 1;
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            int min = i < j ? i : j;
            min = min < len-i ? min : len-i-1;
            min = min < len-j-1 ? min : len-j-1;
            printf("%d ", n-min);
        }
        printf("\n");
    }
    return 0;
}

*/