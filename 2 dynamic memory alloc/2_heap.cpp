#include<bits/stdc++.h>
using namespace std;

long long getsum(int* arr, int n){
  long long sum = 0;
  for(int i = 0; i<n; i++) sum+=arr[i];
  return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    //variable size array
    int* arr = new int[n];

    for(int i = 0; i<n; i++){
      cin>>arr[i];
    }

    cout<<getsum(arr, n)<<'\n';

    delete[] arr;

  return 0;
}