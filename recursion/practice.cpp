#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 8;
    int a = 0, b = 1;
    while(n--)
    {
      int temp = a+b;
      a = b;
      b = temp;
    }

    cout<<a<<endl;

  return 0;
}