#include<bits/stdc++.h>
using namespace std;

int partion(int arr[], int s, int e){
  int pivot = arr[s];
  int cnt = 0;
  for(int i = s+1; i<=e; i++) if(arr[i]<pivot) cnt++;
  
  // actual position of pivot idx
  int pivotidx = s+cnt;
  swap(arr[pivotidx], arr[s]);

  //left and right part manage
  int i = s, j=e;
  while(i<pivotidx && j>pivotidx){
    while(arr[i] <= pivot) i++;
    while(arr[j] >= pivot) j--;
    if(i<pivotidx && j>pivotidx) swap(arr[i++], arr[j--]);
  }
  return pivotidx;

}

void quickSort(int arr[], int s, int e){
  // base case
  if(s>=e) return;  

  // partition
  int p = partion(arr, s, e);

  // quicksort
  quickSort(arr, s, p-1);     //lefr quicksort
  quickSort(arr, p+1, e);     //right quicksort

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[7]{5, 3, 9, 0, 12, 2, 1};

    quickSort(arr, 0, 6);

    for(int i = 0; i<7; i++) cout<<arr[i]<<" ";
    cout<<endl;

  return 0;
}