#include <iostream>
#include <string>
#include <cmath>
using namespace std;
////////////////////// Read a Number And Print it In a Reversed Order //////////////////////

int ReadPositiveNumber(string Masage)
{
    int Number = 0;
    do {
        cout << Masage << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
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
    PrintDigits(ReadPositiveNumber("Please Enter a Positive Number : "));
    return 0;
}
