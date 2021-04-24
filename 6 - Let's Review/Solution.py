# First we have to take the input of the number of Strings 

NumberOfStrings = int(input())

# for loop from 0 to the length of the String

for i in range(0, NumberOfStrings):
    
    # Taking input from the User 
    
    string = input()
    
    # The below line has two parts 1. string[::2] & 2. string[1::2].
    # General format is [start:stop:step].
    # 1. string[::2] basically means that start from 0 to the end of the String skipping 2 characters hence taking all even strings 
    # 2. string[1::2] same as the above but we start from 1 and not 0 
    
    print(string[::2],string[1::2])
