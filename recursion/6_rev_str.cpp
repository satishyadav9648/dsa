#include<bits/stdc++.h>
using namespace std;

bool checkPali(string str, int i, int j){
  if(i>j) return true;

  if(str[i] != str[j]) return false;
  else return checkPali(str, i+1, j-1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string name = "abcde";

    bool ispali = checkPali(name, 0, 4);

    cout << (ispali ? "yes\n" : "no\n");

  return 0;
}