using System;
using System.Collections.Generic;
using System.IO;
class Solution {
    static void Main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution */
        
        int numberOfInputs=Convert.ToInt32(Console.ReadLine());
        int i,j, inputNumber;
        string output;
        
        for(i=1; i<=numberOfInputs; i++){
            inputNumber= Convert.ToInt32(Console.ReadLine());
            for(j=2; j<=inputNumber/j; j++){
                if(inputNumber % j == 0){
                    inputNumber = 1;
                }
            }
            
            output= inputNumber == 1 ? "Not prime" : "Prime";
            Console.WriteLine(output);
        }
        
    }
}
