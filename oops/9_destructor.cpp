#include<bits/stdc++.h>
using namespace std;

class Student{
  public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa){
      this->name = name;
      cgpaPtr = new double;
      *cgpaPtr = cgpa;
    }

    void getinfo(){
      cout<<"name- "<<name<<endl;
      cout<<"cgpa address- "<<cgpaPtr<<endl;
      cout<<"cgpa- "<<(*cgpaPtr)<<endl;
    }

    // destructor
    ~Student(){
      cout<<"hii i am destructor delete everythings.\n";
      delete cgpaPtr;   //manual deletion of dynamically created variable
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Student s1("satish", 9.8);

    s1.getinfo();

}