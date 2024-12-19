#include <iostream>
#include <string>
using namespace std;
//////////////////////  Read a Number And Print Inverted Letter Pattern  //////////////////////

int ReadPositiveNumber(string Masage)
{
    int Number = 0;
    do {
        cout << Masage << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

void PrintInvertedLetterPattern(int Number) {
    for (int i = Number; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << char(i + 64);
        }
        cout << "\n";
    }
}

/*
    void PrintInvertedLetterPattern(int Number)   // طريقة ثانية
    {
        for (int i = 65 + Number - 1; i >= 65; i--)
        {
            for (int j = 1; j <= Number - (65 + Number - 1 - i); j++) {
                cout << char(i);
            }

            cout << endl;
        }
    }
 */


int main() {
    PrintInvertedLetterPattern(ReadPositiveNumber("Please Enter a Positive Number : "));
    return 0;

}