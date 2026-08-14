#include <bits/stdc++.h>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    string name;
    string depart;
    string subject;

    void changedepart(string newdept) { depart = newdept; }

    void setsalary(double s) { salary = s; }   // setter

    double getsalary() { return salary; }       // getter
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Teacher t1;

    t1.name = "satish";
    t1.depart = "computer science";
    t1.subject = "java";
    t1.setsalary(20000);

    cout<<t1.name<<'\n';
    cout<<t1.getsalary()<<'\n';

    return 0;
}