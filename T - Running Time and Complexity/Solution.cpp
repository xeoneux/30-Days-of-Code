#include <cmath>
#include <iostream>

using namespace std;

bool isPrime(int n) {
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int n;
        cin >> n;

        if (n >= 2 && isPrime(n)) cout << "Prime" << endl;
        else cout << "Not prime" << endl;
    }
}
