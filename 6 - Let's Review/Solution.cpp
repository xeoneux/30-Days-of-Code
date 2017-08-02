#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;

        for (int j = 0; j < str.length(); j++) {
            if (j % 2 == 0) cout << str[j];
        }

        cout << " ";

        for (int j = 0; j < str.length(); j++) {
            if (j % 2 != 0) cout << str[j];
        }

        cout << endl;
    }

    return 0;
}
