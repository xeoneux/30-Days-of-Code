#include <iostream>

using namespace std;

int main() {
    try {
        string str;
        cin >> str;

        int num = stoi(str);
        cout << num;
    }
    catch (...) {
        cout << "Bad String";
    }
    return 0;
}
