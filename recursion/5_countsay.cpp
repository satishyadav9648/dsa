#include<bits/stdc++.h>
using namespace std;

void sayd(string arr[], int n){

  if(n == 0) return;

  int dig = n%10;
  n/=10;
  cout<<arr[dig]<<" ";

  sayd(arr, n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string arr[4] = {"zero", "one", "two", "three"};

    int n;
    cin>>n;

    if(n == 0) cout<<arr[0]<<'\n';

    if(n>0) sayd(arr, n);

    cout<<endl;

  return 0;
}