#!/bin/ruby
n = gets.strip.to_i
a = gets.strip
a = a.split(' ').map(&:to_i)
# Write Your Code Here
i=0
numSwaps=0

while n>i do
    j=0
    while n-1>j do
        if a[j]>a[j+1]
            a[j], a[j+1] = a[j+1], a[j]
            numSwaps+=1
        end
        j+=1
    end
    if numSwaps==0
        break
    end  
    i+=1
end
puts "Array is sorted in #{numSwaps} swaps."
puts "First Element: #{a[0]}"
puts "Last Element: #{a[n-1]}"