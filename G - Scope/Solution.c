#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, max=0;
    int absdiff;
    int element[10];

    scanf("%d", &n);
    for(int i=0;i<n;i++) scanf("%d", &element[i]);

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            absdiff = abs(element[i] - element[j]);
                if(max < absdiff) max = absdiff; 
        }
    }       
    printf("%d", max);
}