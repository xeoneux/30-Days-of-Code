N = gets.to_i

def factorial(num)
  if num == 0 || num == 1
    return 1
  end
  return num * factorial(num-1)
end

print factorial N
