
// Declare second integer, double, and String variables.
$f='fgets';

// Read and save an integer, double, and String to your variables.
$i2 = $f(STDIN);
$d2 = $f(STDIN);
$s2 = $f(STDIN);

// Print the sum of both integer variables on a new line.
echo ($i+$i2)."\n";

// Print the sum of the double variables on a new line.
echo number_format($d+$d2,1)."\n";

// Concatenate and print the String variables on a new line
// The 's' variable above should be printed first.
echo $s.$s2."\n";
