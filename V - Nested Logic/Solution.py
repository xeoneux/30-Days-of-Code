actually = str(input()).split(" ")
da = int(actually[0])
ma = int(actually[1])
ya = int(actually[2])

expected = str(input()).split(" ")
de = int(expected[0])
me = int(expected[1])
ye = int(expected[2])

fine = 0

if ya > ye:
    fine = 10000
elif ya == ye:
    if ma > me:
        fine = (ma - me) * 500
    elif ma == me and da > de:
        fine = (da - de) * 15

print(fine)
