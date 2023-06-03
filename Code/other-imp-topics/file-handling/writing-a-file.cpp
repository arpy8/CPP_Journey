#include <iostream>
#include <fstream>
using namespace std;

class Student
{
public:
    Student(int rollno, string name, string sub)
    {
        ofstream ofs("student_data.txt", ios::app);
        ofs << rollno << endl;
		ofs <<  name << endl;
		ofs << sub << endl;
        ofs.close();
    }
};


int main()
{
    int r;
    string n, s;
    cout << "Enter roll no: ";
    cin >> r;
    cout << "Enter name: ";
    cin >> n;
    cout << "Enter subject: ";
    cin >> s;

    Student s1(r, n, s);

	return 0;
	
} 

