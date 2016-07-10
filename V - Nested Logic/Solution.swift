var actually = readLine()!.characters.split(" ").map(String.init).map {
    Int($0)!
}

var da = actually[0]
var ma = actually[1]
var ya = actually[2]

var expected = readLine()!.characters.split(" ").map(String.init).map {
    Int($0)!
}

var de = expected[0]
var me = expected[1]
var ye = expected[2]

var fine = 0;

if ya > ye {
    fine = 10000
} else if ya == ye {
    if ma > me {
        fine = (ma - me) * 500
    } else if ma == me && da > de {
        fine = (da - de) * 15
    }
}

print(fine)
