#include <bits/stdc++.h>
using namespace std;
int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int i2;
    double d2;
    string s2;
    
    string tmp;

    getline(cin, tmp);
    i2 = stoi(tmp);

    getline(cin, tmp);
    d2 = stod(tmp);

    getline(cin, s2);
    i=i+i2;
    cout<<i<<endl;

    d=d+d2;
    cout<<fixed<<setprecision(1)<<d<<endl;
    cout << s << s2 << endl;
    return 0;
}
