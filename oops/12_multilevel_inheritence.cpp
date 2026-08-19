#include<bits/stdc++.h>
using namespace std;

class Person {
  public:
    string name;
    int age;


};

class Student : public Person {     //inheritence of Person class publically
public:
  int rollno;
};

class GrandStudent : public Student{
  public:
    string researchArea;
};



int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  GrandStudent s1;
  s1.name = "satish";
  s1.researchArea = "Quantum physics";
  cout<<s1.name<<endl;
  cout<<s1.researchArea<<endl;
  
  return 0;
}