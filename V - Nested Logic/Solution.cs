    
using System;
using System.Collections.Generic;
using System.IO;
class Solution {
    static void Main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution */
        
        var calendar=Console.ReadLine().Split(' ');
        var day_calendar=int.Parse(calendar[0]);
        var month_calendar=int.Parse(calendar[1]);
        var year_calendar=int.Parse(calendar[2]);
        
        var expected=Console.ReadLine().Split(' ');
        var day_expected=int.Parse(expected[0]);
        var month_expected=int.Parse(expected[1]);
        var year_expected=int.Parse(expected[2]);
        
        var fine=0;
        
        if(year_calendar > year_expected){
            fine=10000;
        } 
        
        else if(year_calendar == year_expected){
            if(month_calendar > month_expected ){
                
                fine= 500 * (month_calendar - month_expected);
            }
            else if(day_calendar > day_expected && month_calendar == month_expected){
                fine = 15 * (day_calendar - day_expected);
            }
        }
        
        Console.WriteLine(fine);

    }
}
