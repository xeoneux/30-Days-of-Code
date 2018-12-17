class Person
    def initialize(firstName, lastName, id)
        @firstName = firstName
        @lastName = lastName
        @id = id
    end

    def printPerson()
        print("Name: ",@lastName , ", " + @firstName ,"\nID: " , @id)
    end
end

class Student < Person
    def initialize(firstName, lastName, id, scores)
        super(firstName, lastName, id)
        @scores = scores
    end

    def calculate
        sum = 0 
        @scores.each do |score|
        sum = sum + score
    end

    average = sum / @scores.length

    if(average >= 90)
        return 'O' # Outstanding
    elsif(average >= 80)
        return 'E' # Exceeds Expectations
    elsif(average >= 70)
        return 'A' # Acceptable
    elsif(average >= 55)
        return 'P' # Poor
    elsif(average >= 40)
        return 'D' # Dreadful
    else
        return 'T' # Troll
    end
  end   
end

input = gets.split()
firstName = input[0]
lastName = input[1]
id = input[2].to_i
numScores = gets.to_i
scores = gets.strip().split().map!(&:to_i)
s = Student.new(firstName, lastName, id, scores)
s.printPerson           
print("\nGrade: " + s.calculate)
