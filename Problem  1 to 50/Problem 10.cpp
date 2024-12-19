#include <iostream>
#include <string>
#include <cmath>
using namespace std;
////////////////////// Read a Number And Print it In Order From Left To Right //////////////////////

int ReadPositiveNumber(string Masage)
{
    int Number = 0;
    do {
        cout << Masage << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

int ReverseNumber(int Number) {
    int Remainder = 0 , Number2 = 0;

    while (Number > 0) {
        Remainder = Number % 10;
        Number = Number / 10;
        Number2 = Number2 * 10 + Remainder;
    }
    return Number2;
}

void PrintDigits(int Number) {
    int Remainder = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        cout << Remainder << endl;
    }
}

int main()
{
    PrintDigits(ReverseNumber(ReadPositiveNumber("Please Enter a Positive Number : ")));
    return 0;
}
