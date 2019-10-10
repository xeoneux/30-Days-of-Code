#include <iostream>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int i2;
    double d2;
    string s2;

    // Read and save an integer, double, and String to your variables.
    string tmp;

    getline(cin, tmp);
    i2 = stoi(tmp);

    getline(cin, tmp);
    d2 = stod(tmp);

    getline(cin, s2);

    // Print the sum of both integer variables on a new line.
    i=i+i2;
    cout<<i<<endl;

    // Print the sum of the double variables on a new line.
    // Used setprecision(1) to get at least 1 digit after decimal point
    d=d+d2;
    cout<<fixed<<setprecision(1)<<d<<endl;

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s << s2 << endl;

    return 0;
}
