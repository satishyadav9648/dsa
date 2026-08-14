#include<bits/stdc++.h>
using namespace std;

int getmax(int& a, int& b){
  return (a>b) ? a:b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 4, b = 2;

    int ans = getmax(a, b);
    cout<<ans<<'\n';

    a+=5;
    b+=10;

    ans = getmax(a,b);
    cout<<ans<<'\n';


    

  return 0;
}