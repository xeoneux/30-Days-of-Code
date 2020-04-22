n=int(input()) #taking n(number) times to loop over

for i in range(n): #range(n) works as 0-n
    s=input() #takes string "s"
    
#Using list comprehension to reduce the number of lines Syntax of below comprehension:
# c(variable)=[(statement to print) (loop:to loop over the string) (condition:for checking the even condition))]
    c=[s[i] for i in range(len(s)) if i%2==0 ]  

#the above list comprehension returns the output(even strings) in list, So we have to use "Join" method to convert it into string
    print("".join(c),end=' ')
    
    c=[s[i] for i in range(len(s)) if i%2!=0]
    print("".join(c))
