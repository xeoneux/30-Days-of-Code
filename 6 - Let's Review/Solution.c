#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */      int tests;
    scanf("%d", &tests);
    
    for (int i = 0; i < tests; i++) {
        char s[10000];
        scanf("%s", s);
        
        int j = 0;
        while (s[j] != '\0') {
            if (j % 2 == 0) {
                printf("%c", s[j]);
            }
            j++;
        }
        printf(" ");
        j = 0;
        while (s[j] != '\0') {
            if (j % 2 != 0) {
                printf("%c", s[j]);
            }
            j++;
        }
        printf("\n");
    }
    
    return 0;
}
