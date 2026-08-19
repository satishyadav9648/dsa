#include<bits/stdc++.h>
using namespace std;

class Person {
  public:
    string name;
    int age;

    Person(string name, int age){
      this->name = name;
      this->age = age;
    }

};

class Student : public Person {     //inheritence of Person class publically
public:
  int rollno;

  Student(string name, int age, int rollno):Person(name, age){
    this->rollno = rollno;
  }
  
  void getInfo(){
    cout<<"name : "<<name<<endl;
    cout<<"age : "<<age<<endl;
    cout<<"rollno : "<<rollno<<endl;
  }

};

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  Student s1("satish", 21, 1244);

  s1.getInfo();

  return 0;
}