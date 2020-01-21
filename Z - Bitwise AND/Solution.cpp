#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    int N, K;
    
    for(int i = 0; i < t; i++)
    {
        vector<int> s;
        cin >> N >> K;

        for(int j = 1; j <= N; j++)
        {
            s.push_back(j);
        }

        int maximum = 0;

        for(int A = 0; A < N; A++)
        {
            for(int B = A + 1; B < N; B++)
            {
                if((s[A] & s[B]) < K && (s[A] & s[B]) > maximum)
                    maximum = (s[A] & s[B]);
            }
        }

        cout << maximum << endl;
    }

    return 0;
}

