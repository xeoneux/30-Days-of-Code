n=int(input())
phonebook={}
for i in range (n):
   x=input().split()
   phonebook[x[0]]=x[1]
for i in range (n):
    try:
        query =input()
        if query in phonebook:
            queryphone =phonebook[query]
            print(query+'='+queryphone)
        else:
            print('Not found')
    except:break
        
