#include <iostream>

using namespace std;

int main() {
    try {
        string str;
        cin >> str;

        int num = stoi(str);
        cout << num;
    }
    catch (exception) {
        cout << "Bad String";
    }
}
