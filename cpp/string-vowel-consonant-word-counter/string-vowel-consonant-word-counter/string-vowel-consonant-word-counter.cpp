#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int vowel=0, conso=0, word=0;

    cout << "Enter a string: ";
    getline(cin, str);

    for(int i=0;str[i]!='\0';i++)
    {
        
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'
            || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')  vowel++;

        else if (str[i] == ' ') word++;
        
        else conso++;
    }

    cout << "Vowlels: " << vowel << endl;
    cout << "Consonants: " << conso << endl;
    cout << "Words: " << word+1 << endl;
    return 0;
}
