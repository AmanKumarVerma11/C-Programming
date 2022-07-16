//Minimum number of Flips PROBLEM CODE: MINFLIPS
/*
Chef has an array A of length N consisting of 1 and −1 only.
In one operation, Chef can choose any index i
(1≤i≤N) and multiply the element Ai by −1.
Find the minimum number of operations required to make the sum of the array equal to 0.
Output -1 if the sum of the array cannot be made 0.
*/
#include <stdio.h>
#include<stdlib.h>

int main() {
	// Read the number of test cases.
	int T;
	scanf("%d", &T);
	while(T--) {
		int N,i;
		scanf("%d\n", &N);
		int a[N];
        for(i=0;i<N;i++){
                scanf("%d", &a[i]);
                //sum=a[i]+sum;
        }
        if(N%2!=0){
             printf("-1\n");
        }else {
            int sum=0;
            for(i=0;i<N;i++){
                sum=a[i]+sum;
            }
            if(sum==0){
                printf("0\n");
            }else if(sum<0) {
                printf("%d\n",abs(sum/2));
            }else {
                printf("%d\n",sum/2);
            }
        }
	}

	return 0;
}