#include <iostream>
#include <string>
using namespace std;
////////////////////// Check is Perfect Number //////////////////////

int ReadPositiveNumber(string Masage)
{
    int Number = 0;
    do {
        cout << Masage << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

bool IsPerfectNumber(int Number) {
  int sum = 0;
  for (int i = 1; i < Number; i++) {
    if(Number % i == 0)
       sum += i;
  }
    return Number == sum;
  }


void PrintResult(int Number) {
  if(IsPerfectNumber(Number))
      cout << Number << " Is Perfect Number " << endl;
  else
      cout << Number << " Is Not Perfect Number " << endl;
}

int main() {
  PrintResult(ReadPositiveNumber("Plase Enter a Positive Number : "));
  return 0;

}