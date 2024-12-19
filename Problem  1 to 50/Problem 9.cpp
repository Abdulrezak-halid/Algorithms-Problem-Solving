#include <iostream>
#include <string>
////////////////////// Read a Number then Print All Digit Frequency In That Number //////////////////////
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

void PrintAllDigitsFrequency(int Number) {
  cout << endl;

  for (int i = 0; i < 10; i++) {
    short DigitFrequncy = 0;
    DigitFrequncy = CountDigitFrequncy(i, Number);

    if (DigitFrequncy > 0) {
      cout << "Digit " << i << " Frequency Is "
           << DigitFrequncy << " Time(s) \n";
      }
   }
}
int main() {
    int Number = ReadPositiveNumber("Please Enter a Positive Number : ");
    PrintAllDigitsFrequency(Number);
    return 0;
}