#include <iostream>

using namespace std;

int main() {
    int da, ma, ya;
    cin >> da;
    cin >> ma;
    cin >> ya;

    int de, me, ye;
    cin >> de;
    cin >> me;
    cin >> ye;

    int fine = 0;

    if (ya > ye) fine = 10000;
    else if (ya == ye) {
        if (ma > me) fine = (ma - me) * 500;
        else if (ma == me && da > de) fine = (da - de) * 15;
    }

    cout << fine;
}
