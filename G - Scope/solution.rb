class Difference
  attr_accessor :maximum_difference
  def initialize(a)
    @elements = a
    @maximum_difference = 0
  end

  def compute_difference()
    max = 0
    for i in 0..@elements.length - 1
      for j in 0..@elements.length - 1
        diff = @elements[i] - @elements[j]
        if diff.abs() > max
          max = diff
        end
      end
    end
    @maximum_difference = max
  end
end


class Solution
  def main
    n = gets.chomp.to_i
    a = [n]
    a = gets.chomp.split(' ').map(&:to_i)
    diff = Difference.new(a)
    diff.compute_difference
    puts diff.maximum_difference
  end
end