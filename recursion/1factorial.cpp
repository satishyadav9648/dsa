#include<bits/stdc++.h>
using namespace std;

int fact(int a){
  if(a == 1) return 1;

  return a*fact(a-1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 5;

    cout<<fact(n)<<'\n';

  return 0;
}