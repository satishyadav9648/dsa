#include <bits/stdc++.h>
using namespace std;

void reverse(string &st)
{
    int s = 0;
    int e = st.length() - 1;
    while (s < e)
        swap(st[s++], st[e--]);
}

int main()
{

    string s;
    cin >> s;

    reverse(s);

    cout << s << '\n';

    return 0;
}