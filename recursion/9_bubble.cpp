#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[6] = {3, 2, 7, 80, 0, -5};

    int i = 0;
    while(i<6){
      for(int j = 0; j<5; j++){
        if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
      }
      i++;
    }

    for(int k = 0; k<6; k++) cout<<arr[k]<<" ";

  return 0;
}