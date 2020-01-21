#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<string> emails(N);
    vector<string> names(N);
    vector<string> gmailUsers;

    for(int i = 0; i < N; i++)
    {
        cin >> names[i] >> emails[i];
    }

    for(int i = 0; i < N; i++)
    {
        if(regex_match(emails[i], regex("(.*)@gmail.com")))
            gmailUsers.push_back(names[i]);
    }

    sort(gmailUsers.begin(), gmailUsers.end());
    
    for(int index = 0; index < gmailUsers.size(); index++)
    {
        cout << gmailUsers[index] << endl;
    }


    return 0;
}

