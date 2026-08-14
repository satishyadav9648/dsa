#include<bits/stdc++.h>
using namespace std;

void merge(int* arr , int s, int e){
  int mid = s+(e-s)/2;
  int len1 = mid-s+1;
  int len2 = e-mid;
  int *first = new int[len1];
  int *second = new int[len2];

  int k = s;            // k -> mainArrIdx 
  for(int i = 0; i<len1; i++) first[i] = arr[k++];
  k=mid+1;
  for(int i = 0; i<len2; i++) second[i] = arr[k++];

  int idx1 = 0; 
  int idx2 = 0;
  k=s;
  while(idx1<len1 && idx2<len2){
    if(first[idx1] <second[idx2]) arr[k++] = first[idx1++];
    else arr[k++] = second[idx2++];
  }
  while(idx1 < len1) arr[k++] = first[idx1++];
  while(idx2 < len2) arr[k++] = second[idx2++];
}

void mergesort(int* arr, int s, int e)
{
  if(s>=e) return;
  int mid = s+(e-s)/2;
  
  mergesort(arr, s, mid);
  mergesort(arr, mid+1, e);
  merge(arr, s, e);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[7]{9, 4, 13, 0, 5, 3, 10};
    int n = 7;

    mergesort(arr, 0, n);

    for(int i = 0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;


  return 0;
} 