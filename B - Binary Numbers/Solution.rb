#!/bin/ruby

require 'json'
require 'stringio'

n = gets.to_i
sum = 0
max = 0

 while n > 0 
     if (n%2==1)
         sum+=1
         if sum > max 
          max = sum 
         end
         
     else sum = 0
     end
     n = n /2
end
 
 print max  

