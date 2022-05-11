#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int T;
    long int n[T];
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%ld",&n[i]);
        int flag=0;
        for(long int j=sqrt(n[i]);j>1;j--){
            if(n[i]%j==0){
                flag=1;
                break;
            }
        }
        if(flag){
            printf("Not prime\n");
        }else
        if(n[i]==1){
            printf("Not prime\n");
        }else{
            printf("Prime\n");
        }
    }

    return 0;
}
