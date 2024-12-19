#include <iostream>
#include <string>
#include <cmath>
using namespace std;
////////////////////// Read a Number And Print The Sum Number Index //////////////////////

int ReadPositiveNumber(string Masage)
{
    int Number = 0;
    do {
        cout << Masage << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

int PrintSumOfDigits(int Number) {
    int Remainder = 0 , Sum = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        Sum = Sum + Remainder;
    }
    return Sum;
}

int main()
{
    cout << "\nSum Of Digits = "
      << PrintSumOfDigits(ReadPositiveNumber("Please Enter a Positive Number ?")) << endl;
    return 0;
}
