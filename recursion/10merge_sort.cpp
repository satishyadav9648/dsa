#include<bits/stdc++.h>
using namespace std;

void merge(int* arr, int s, int e){
  vector<int> temp;
  int mid = s+(e-s)/2;
  int i = s;
  int j = mid+1;

  while(i<=mid && j<=e){
    if(arr[i] <= arr[j])  temp.push_back(arr[i++]);
    else temp.push_back(arr[j++]);
  }
  while(i<=mid) temp.push_back(arr[i++]);
  while(j<=e) temp.push_back(arr[j++]);

  for(int k = 0; k<temp.size(); k++){
    arr[k+s] = temp[k];
  }
}

void mergesortrec(int* arr, int s, int e){
  if(s>=e) return;
  int mid = s+(e-s)/2;
  mergesortrec(arr, s, mid);
  mergesortrec(arr, mid+1, e);
  
  merge(arr, s, e);

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[7]{4, 6, 20, 9, 1, 14, 0};

    mergesortrec(arr, 0, 6);

    for(int i = 0; i<7; i++) cout<<arr[i]<<" ";
    cout<<endl;

  return 0;
}


