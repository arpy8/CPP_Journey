#include <iostream>
using namespace std;

typedef int marks;

class Student
{
private:
    int roll;
    string name;
    marks phy, chem, math;
public:
    Student(int r, string n, int p = 0, int c = 0, int m = 0)
    {
        roll = r;
        name = n;
        phy = p;
        chem = c;
        math = m;
    }
    int total() 
    {
        return phy + chem + math;
    }
     
    char grade()
    {
        float average = total() / 3;
        if (average > 60) return 'A';
        else if (average >= 40 && average < 60) return 'B';
        else return 'C';
    }
};


int main()
{
    cout << "Hello World!\n";
    int roll;
    string name;
    int p, c, m;
    cout << "Enter roll number: ";
    cin >> roll;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter marks in three subjects: ";
    cin >> p >> c >> m;
    Student s(roll, name, p, c, m);
    cout << "Total Marks: " << s.total() << endl;
    cout << "Grade of Student: " << s.grade() << endl;
}

