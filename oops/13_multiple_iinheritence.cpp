#include<bits/stdc++.h>
using namespace std;

class Student {     
public:
  string name;
  int rollno;
};

class Teacher {
  public:
    string subject;
    double salary;
};

class TA : public Student, public Teacher {

};

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  TA t1;
  t1.name = "satish";
  t1.subject = "Quantum physics";
  cout<<t1.name<<endl;
  cout<<t1.subject<<endl;
  
  return 0;
}