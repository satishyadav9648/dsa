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

    //copy constructor
    Teacher(Teacher &orgObj){
      cout<<"I am custom copy constructor..\n";
      this->name = orgObj.name;
      this->dept = orgObj.dept;
    }

    void getinfo(){
      cout<<name<<endl;
      cout<<dept<<endl;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Teacher t1("shubham", "information technology");  // constructor call
    Teacher t2(t1);  // 

    cout<<t1.name<<endl; 
    cout<<t1.dept<<endl;

    t2.getinfo();

  return 0;
}