#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
  vector<int> tokens(3);
  cin>>tokens[0]>>tokens[1]>>tokens[2];

  int cnt = 0;
  while(tokens[0]!=tokens[1] && tokens[1]!=tokens[2] && tokens[0]!=tokens[2]){
    sort(tokens.begin(), tokens.end());
    tokens[0]++;
    tokens[2]--;
    cnt++;
  }

  cout<<cnt<<"\n";
  
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int cnt = 0;
    while(t--) solve();

    return 0;
}


