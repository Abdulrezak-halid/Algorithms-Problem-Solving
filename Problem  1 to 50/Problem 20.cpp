#include <iostream>
#include <cstdlib>
using namespace std;
////////////////////// Print Random Small Letter , Capital Letter , Special Character , and Digit In Order   //////////////////////

int RandomNumber(int From, int To)
{
  int randNum = rand() % (To - From + 1) + From;
  return randNum;
}
enum enCharType { smallLetter = 'a' , CapitalLetter = 'A' , SpecialLetter = 3 , Digit = 4 };

char GetRandomLetter(enCharType CharType) {
  switch (CharType) {
    case enCharType::smallLetter:
      return char(RandomNumber(97 , 122));
    break;
    case enCharType::CapitalLetter:
      return char(RandomNumber(65 , 90));
    break;
    case enCharType::SpecialLetter:
      return char(RandomNumber(33 , 47));
    break;
    case enCharType::Digit:
      return char(RandomNumber(48 , 57));
    break;
  }
}
int main() {

  srand((unsigned)time(NULL));

  cout << "Random Small Letter   : " << GetRandomLetter(enCharType::smallLetter) << endl;
  cout << "Random Capital Letter : " <<  GetRandomLetter(enCharType::CapitalLetter) << endl;
  cout << "Random Special Letter : " <<  GetRandomLetter(enCharType::SpecialLetter) << endl;
  cout << "Random Digit          : " << GetRandomLetter(enCharType::Digit) << endl;
}
