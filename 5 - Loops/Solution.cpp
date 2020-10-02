#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    int i=1 ;
    while(i<11) {
        printf("%i x %i = %i\n", N, i, N * i);
        ++i ;
    }
    return 0;
}
