#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n, int st = 0){

  for(int i = st; i<n; i++) cout<<arr[i];

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[5] = {1, 2, 4, 5, 8};

    print(arr, 5);
    print(arr, 5, 3);
    
    cout<<'\n';
  return 0;
}