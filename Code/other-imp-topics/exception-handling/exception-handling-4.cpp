#include <iostream>
using namespace std;

int main()
{
    try 
    {
        throw string("error");
    }
    catch (int e)
    {
        cout << "int catch";
    }
    catch (double e) 
    {
        cout << "double catch" << endl;
    }

    //ellipsis catch
    catch (...)
    {
        cout << "all catch" << endl;
    }

    cout << "Bye";
}z

