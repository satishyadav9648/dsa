#include<bits/stdc++.h>
using namespace std;

class Teacher{
  private: 
    double salary;
  
  public: 
    string name;
    string dept;
    string subject;

    //parameterised constructor
    Teacher(string name, string dept){
      this->name = name;
      this->dept = dept;
    }

};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Teacher t1("shubham", "information technology");  // constructor call
    Teacher t2("hii", "by");  // again constructor call

    cout<<t1.name<<endl; 
    cout<<t1.dept<<endl;

  return 0;
}