#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    reverse(arr, arr + N);

    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
