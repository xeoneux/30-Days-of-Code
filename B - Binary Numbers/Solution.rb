n = gets.to_i
sum = 0
max = 0

while n > 0
  if n.odd?
    sum += 1
    max = sum if sum > max
  else sum = 0
  end
  n /= 2
end

print max
