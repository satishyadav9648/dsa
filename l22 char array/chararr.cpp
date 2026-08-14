#include<bits/stdc++.h>
using namespace std;

int getln(char name[])
{
    int ln = 0;
    for(int i = 0; name[i]!='\0'; i++) ln++;
    return ln;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char name[20];
    cout<<"enter your name \n";
    cin>>name;
    cout<<name<<"\n";

    cout<<"length"<<getln(name)<<'\n';
    
    return 0;
}