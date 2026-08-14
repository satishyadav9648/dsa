#include<bits/stdc++.h>
using namespace std;

int power(int a){
  if(a == 0) return 1;

  return 2*power(a-1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int ans = power(n);

    cout<<ans<<'\n';

  return 0;
}