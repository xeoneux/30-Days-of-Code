meal_cost = gets.to_f
tip_percent = gets.to_i
tax_percent = gets.to_i

result = meal_cost * (1 + tip_percent.to_f / 100 + tax_percent.to_f / 100)

puts result.round()
