dicts={}
k=[]
n=int(input())
for _ in range(n):
    entry=input().split(" ")
    dicts[entry[0]]=entry[1]


while True:
    try:
        line = input()
    except EOFError:
        break
    k.append(line)

for i in k:
    if i in dicts:
        print("{}={}".format(i,dicts[i]))
    else:
        print("Not found")    
