#include <iostream>
#include <string>
#include <cmath>
using namespace std;
////////////////////// Read a Number And Print Revers The Number //////////////////////

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

int main()
{
    cout << "\nReverse Is :\n" << ReverseNumber(ReadPositiveNumber("Please Enter a Positive Number : ")) << endl;
    return 0;
}
