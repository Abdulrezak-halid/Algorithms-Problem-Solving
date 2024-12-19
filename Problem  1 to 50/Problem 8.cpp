#include <iostream>
#include <string>
////////////////////// Read a digit and a Number then print digit frequncy in that number //////////////////////
using namespace std;

int ReadPositiveNumber(string Masage)
{
    int Number = 0;
    do {
        cout << Masage << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

int CountDigitFrequncy(short DigitToCheck, int Number) {
      int FreqCount = 0, Remainder = 0;

      while (Number > 0) {
        Remainder = Number % 10;
        Number = Number / 10;

        if (DigitToCheck == Remainder) {
        FreqCount++;
      }
}
return FreqCount;

}
int main() {
     int Number = ReadPositiveNumber("Please Enter a Positive Number : ");
     short DigitCheck = ReadPositiveNumber("Please Enter One Digit To Check : ");

     cout << "\nDigit " << DigitCheck << "Frequency Is "
          << CountDigitFrequncy(DigitCheck, Number) << "Time(s) \n";
}