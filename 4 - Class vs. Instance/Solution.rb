class Person
    attr_accessor :age
    def initialize(initialAge)
        if  initialAge < 0
            @age = 0
            puts "Age is not valid, setting age to 0."
        else
            @age = initialAge
        end
    end
    def amIOld()
      if @age < 13
          puts "You are young."
      elsif @age >= 13 and @age <18
          puts "You are a teenager."
      else
          puts "You are old."
      end
    end
    def yearPasses()
        @age = @age + 1
    end
end

T=gets.to_i
for i in (1..T)do
    age=gets.to_i
    p=Person.new(age)
    p.amIOld()
    for j in (1..3)do
        p.yearPasses()
    end
    p.amIOld
  	puts ""
end
