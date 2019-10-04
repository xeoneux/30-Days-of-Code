#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    //Single Loop
    for (int i = 1; i < 11; i++) {
        printf("%i x %i = %i\n", N, i, N * i);
    }
    
    //Nested Loop
    for(int i=1;i<11;i++){
        for(int j=1;j<11;j++)
            printf("%i x %i = %i\n", i, j, i * j);
        printf("\n");
    }
    return 0;
}
