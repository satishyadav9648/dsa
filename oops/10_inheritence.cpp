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

    Person(){
      cout<<"non-parameterised parent class constructor.\n";
    }

    ~Person(){
      cout<<"parent class destructor.\n";
    }

};

class Student : public Person {     //inheritence of Person class publically
public:
  int rollno;
  
  void getInfo(){
    cout<<"name : "<<name<<endl;
    cout<<"age : "<<age<<endl;
    cout<<"rollno : "<<rollno<<endl;
  }

  Student(){
    cout<<"student class constructor.\n";
  }

  ~Student(){
    cout<<"student class destructor.\n";
  }
};

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  Student s1;
  s1.name = "satish";
  s1.age = 21;
  s1.rollno = 25661;


  s1.getInfo();

  return 0;
}