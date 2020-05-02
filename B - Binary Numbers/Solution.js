function main() {
    const n = parseInt(readLine(), 10);
    var decNum = dec2bin(n)
    console.log(charCount(decNum,1));
}
dec2bin = (dec) => {
    return (dec >>> 0).toString(2);
}
function charCount(str,letter) {
    var letter_count = 0;
    for (var i=0;i<str.length;i++) {
        if(str.charAt(i) == letter) {
            letter_count += 1;
        }
    }
    return letter_count;
}
main()