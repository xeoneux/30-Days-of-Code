#!/bin/ruby

N = gets.to_i
if N % 2 != 0
   print "Weird"
else
   if N >= 2 and N <= 5
       print "Not Weird"
   elsif N >= 6 and N<=20
       print "Weird"
   else
       print "Not Weird"
   end
end
