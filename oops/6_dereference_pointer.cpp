#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x = 10;
    int* y = &x;   // referencing
    cout<<y<<endl;  
    cout<<*y<<endl;  // dereferencing

  return 0;
}