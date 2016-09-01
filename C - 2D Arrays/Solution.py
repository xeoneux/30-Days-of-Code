arr = []

for _ in range(6):
    tmp = [int(x) for x in str(input()).split(" ")]
    arr.append(tmp)

maximum = -9 * 7

for i in range(6):
    for j in range(6):
        if j + 2 < 6 and i + 2 < 6:
            result = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2]
            if result > maximum:
                maximum = result

print(maximum)
