#include<bits/stdc++.h>
using namespace std;

char lowercase(char ch)
{
    if(ch >= 'a' && ch<='z') return ch;
    else {
        char temp = ch-'A'+'a';
        return temp;
    }
}

int main()
{
    string s;

    cout<<lowercase('b')<<'\n';
    cout<<lowercase('D')<<'\n';
    cout<<lowercase('#')<<'\n';
    return 0;
}