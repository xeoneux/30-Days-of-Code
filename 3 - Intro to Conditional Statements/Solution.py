N = int(input())

if N % 2 != 0:
    print("Weird")
else:
    if N <= 5:
        print("Not Weird")
    elif N <= 20:
        print("Weird")
    else:
        print("Not Weird")
