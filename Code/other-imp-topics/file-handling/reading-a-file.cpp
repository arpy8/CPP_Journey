#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    ifstream ifs("student_data.txt");
    int rollno;
    string name, sub;
    
    ifs >> rollno >> name >> sub;

    cout << "Roll No : " << rollno << endl;
    cout << "Name : " << name << endl;
    cout << "Subject : " << sub << endl;

}

 