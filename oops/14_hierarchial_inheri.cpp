#include<bits/stdc++.h>
using namespace std;

class Person {     
public:
  string name;
};

class Student : public Person {
  public:
    int rollno;
};

class Teacher : public Person {
  public:
    string subject;
    double salary;
};


int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  Teacher t1;
  t1.name = "satish";
  t1.subject = "Quantum physics";
  cout<<t1.name<<endl;
  cout<<t1.subject<<endl;
  
  return 0;
}