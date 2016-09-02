T = int(input())

for i in range(T):
    tmp = str(input()).split()
    N = int(tmp[0])
    K = int(tmp[1])

    maximum = 0

    for j in range(1, N):
        for k in range(j + 1, N + 1):
            h = j & k
            if K > h > maximum:
                maximum = h

    print(maximum)
