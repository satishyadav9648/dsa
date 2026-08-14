#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    map<char, int> freq;

    for(int i = 0; i<s.length(); i++)
    {
        freq[tolower(s[i])]++;
    }

    int max_freq = 0;
    char max_occ = '\0';
    for(auto it : freq)
    {
        if(it.second > max_freq)
        {
            max_freq = it.second;
            max_occ = it.first;
        }
    }

    cout<<max_freq<<" "<<max_occ<<'\n';

    return 0;
}