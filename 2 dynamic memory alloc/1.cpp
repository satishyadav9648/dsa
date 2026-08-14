#include<bits/stdc++.h>
using namespace std;

int& func(int a){
  int num = a;
  int& ans = num;
  return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 5;
    
    auto& x = func(n);
    cout<<x<<'\n';
    cout<<"satish\n";
  
  return 0;
}


