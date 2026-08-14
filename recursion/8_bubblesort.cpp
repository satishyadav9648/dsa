#include<bits/stdc++.h>
using namespace std;

void sortArr(int *arr, int n){
  if(n == 1 || n==0) return;

  for(int i = 0; i<n-1; i++){
    if(arr[i] > arr[i+1]) swap(arr[i], arr[i+1]);
  }

  return sortArr(arr, n-1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[6] = {2, 5, 9, 1, 4, 3};

    sortArr(arr, 6);

    for(int i = 0; i<6; i++) cout<<arr[i]<<" ";
    cout<<endl;

  return 0;
}