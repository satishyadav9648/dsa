#include<bits/stdc++.h>
using namespace std;

class Teacher{
  private: 
    double salary;
  
  public: 
    string name;
    string dept;
    string subject;

    Teacher(){
      cout<<"Hii, i am a constructor."<<endl;
    }

};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Teacher t1;  // constructor call
    Teacher t2;  //
    t1.name = "satish";
    // t1.salary = 25000;

    cout<<t1.name<<endl; 
    cout<<t1.dept<<endl;

  return 0;
}