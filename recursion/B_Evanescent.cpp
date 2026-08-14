#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
  int n;
  cin>>n;
  string s;
  cin>>s;

  int cntb = 1;
  for(int i = 1; i<n; i++){
    if(s[i] != s[i-1]) cntb++;
  }

  bool pss = false, ps = false;

  for(int i = 1; i<n-1; i++){
      if(s[i]!=s[i-1] && s[i]!=s[i+1]){
        if(s[i-1]!=s[i+1]) ps = true;
        if(s[i-1]==s[i+1]) pss = true;
        
      }  
  }
  if(pss) cntb-=2;
  else if(ps) cntb--;

  cout<<cntb<<"\n";
  
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}