n = int(input())
phonebook = dict()
for i in range(n):
    line = input()
    line = line.split()
    phonebook[line[0]] = phonebook.get(line[0],line[1])

while 1:
    try:
        q = input()
        if q in phonebook:
            print(str(q) + "=" + str(phonebook[q]))
        else:
            print("Not found")
    except:
        break
