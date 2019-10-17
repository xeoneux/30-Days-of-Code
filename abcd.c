#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
   char inputString[105]; // declare a variable to hold our input
   scanf("%[^\n]", inputString); // get a line of input from stdin and save it to our variable
  
   // Your first line of output goes here
   printf("Hello, World.\n");

   // Write the second line of output
   printf("%s", inputString);

   return 0;
}
