function processData(input) {
    //Enter your code here
    const [d1,m1,y1,d2,m2,y2] = input.split(/\s/).map(Number);
    if (y1 !== y2) console.log(y1 > y2 ? 10000 : 0);
    else if(m1 !== m2) console.log(m1 > m2 ? (m1 - m2) * 500 : 0);
    else console.log(d1 > d2 ? (d1 - d2) * 15 : 0);
} 

process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
    _input += input;
});

process.stdin.on("end", function () {
   processData(_input);
});
