#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    // Declare second integer, double, and String variables.
    int second_integer;
    double second_double;
    char second_string[100];
    
    // Read and save an integer, double, and String to your variables.
    scanf("%d\n",&second_integer);
    scanf("%lf\n",&second_double);
    fgets(second_string, 100, stdin);

    // Print the sum of both integer variables on a new line.
    printf("%d\n",i+second_integer);
    
    // Print the sum of the double variables on a new line.
    printf("%.1lf\n",d+second_double);
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    printf("%s%s",s,second_string);

    return 0;
}