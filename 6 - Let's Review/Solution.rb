# Enter your code here. Read input from STDIN. Print output to STDOUT
T = gets.to_i

for i  in  (1..T) do
    string = gets.chomp
    even = Array.new
    odd = Array.new
    string.split(//).to_a.each_with_index do |x, i|
        even.push x if i%2 == 0
        odd.push x if i%2 == 1
    end

    puts "#{even.join} #{odd.join}"  
end
