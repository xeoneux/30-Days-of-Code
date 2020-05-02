function main() {
    var n = parseInt(readLine());
    a = readLine().split(' ');
    a = a.map(Number);
    // Write Your Code Here
    var swapped;
    var numSwaps = 0;
    do {
        swapped = false;
        for (var i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                var temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                swapped = true;
                numSwaps++
            }
        }
    } while (swapped);
    console.log('Array is sorted in ' + numSwaps + ' swaps.')
    console.log('First Element:', a[0]);
    console.log('Last Element:', a[n - 1]);
}