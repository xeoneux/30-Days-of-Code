#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i < 11; i++) {
        printf("%i x %i = %i\n", N, i, N * i);
    }

    return 0;
}
