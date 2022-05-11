#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    long int n;
    char bin_str[100];
    int i=0;
    scanf("%ld",&n);
    int count=0;
    int max_count=count;
    while(n>0){
        int temp=n%2;
        n=n/2;
        if(temp==0)
        {
            count=0;
        }else{
            count++;
        }
        if(max_count<count){
                max_count=count;
        }
    }
    printf("%d",max_count);
}
