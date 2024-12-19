#include <iostream>
using namespace std;
////////////////////// Guess a 3-Letter Password (All Capital) //////////////////////

string Read3LetterPassword()
{
    string Password;
    cout << "Please Enter 3 Capital Letters The Password:" << endl;
    cin >> Password;
    return Password;
}

bool GuessPassword(string OrginalPassword) {
    string word = "";
    int Counter = 0;
    cout << "\n";

    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
            {
                word = word + char(i);
                word = word + char(j);
                word = word + char(k);
                Counter++;

                cout << "Trial [" << Counter <<"] : ";
                cout << word << endl;

                if (word == OrginalPassword) {
                    cout << "\nPassword Is : " << word << endl;
                    cout << "Found After";
                    cout << Counter << " Trial(s)\n";

                    return true;
                }
                word = "";
            }
        }
    }
    return false;
}

int main()
{
    GuessPassword(Read3LetterPassword());
    return 0;
}