#include <iostream>
#include <string>
using namespace std;
////////////////////// Check is Perfect Number and Print //////////////////////

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

void PrintPerfectNumberFrom1ToN(int Number) {
  for(int i = 1; i <= Number; i++) {
    if(IsPerfectNumber(i))
      {
          cout << i << endl;
      }
  }
}


int main() {
  PrintPerfectNumberFrom1ToN(ReadPositiveNumber("Plase Enter a Positive Number : "));
    return 0;

}