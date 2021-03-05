#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        string s1, s2;
        cin >> s;
        for (int j = 0; j < s.size(); j++)
        {
            if (j % 2 == 0)
                s1 += s[j];
            else
                s2 += s[j];
        }
        cout << s1 << " " << s2 << endl;
    }
    return 0;
}
