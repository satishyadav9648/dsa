#include<bits/stdc++.h>
using namespace std;

class Teacher{
  private: 
    double salary;
  
  public: 
    string name;
    string dept;
    string subject;

    void setSalary(int n) {salary = n;}

    int getSalary() {return salary;}

};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Teacher t1;  // constructor call
    t1.name = "satish";
    // set salary
    t1.setSalary(25000);
    cout<<t1.getSalary()<<endl; // by using it we can access private member

    cout<<t1.name<<endl; 
    cout<<t1.dept<<endl;

  return 0;
}