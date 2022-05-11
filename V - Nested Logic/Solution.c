#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int Aday, Amonth, Ayear, Eday,Emonth, Eyear;
    int fine = 0;
    scanf("%d %d %d %d %d %d", &Aday, &Amonth, &Ayear, &Eday, &Emonth, &Eyear);
    if (Ayear == Eyear){
        if (Amonth == Emonth){
            fine = 15 * (Aday - Eday);
        }
        else {
            fine = 500 * (Amonth - Emonth);
        }
    }
    else if (Ayear > Eyear){
        fine = 10000;
    }
    
    if (fine < 0){
        fine = 0;
    }
    
    printf("%d", fine);
    return 0;
}

