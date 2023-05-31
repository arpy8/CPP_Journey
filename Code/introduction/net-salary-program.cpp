#include <iostream>

using namespace std;

int main()
{
    float b_sal, p_alw, p_ddt, t_sal;
    cout << "Net Salary Calculator\n";
    cout << "Base Salary : ";
    cin >> b_sal;
    cout << "Percentage of Allowances : ";
    cin >> p_alw;
    cout << "Percentage of Deductions : ";
    cin >> p_ddt;
    t_sal = float(b_sal + b_sal * p_alw / 100 - b_sal * p_ddt / 100);
    cout << "Your net salary is " << t_sal << " ruppees.";
}

