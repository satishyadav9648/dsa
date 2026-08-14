#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int r;
    cin>>r;
    int c;
    cin>>c;

    int ** arr = new int*[r];

    for(int i = 0; i<r; i++){
      arr[i] = new int[c];
    }

    for(int i = 0; i<r; i++){
      for(int j = 0; j<c; j++){
        cin>>arr[i][j];
      }
    }

    for(int i = 0; i<r; i++){
      for(int j = 0; j<c; j++){
        cout<<arr[i][j];
      }
      cout<<'\n';
    }
    cout<<endl;


    for(int i = 0; i<r; i++){
      delete[] arr[i];
    }

    delete[] arr;

  return 0;
}