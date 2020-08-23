T = int(input())

for i in range(T):
    tmp = str(input()).split()
    N = int(tmp[0])
    K = int(tmp[1])

    print(K-1 if ((K-1) | K) <= N else K-2)
