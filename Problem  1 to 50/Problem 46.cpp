#include <iostream>
using namespace std;
///////////////////  Print ~ abs ~ Of Numbers , don`t Use Build In abs Function  ///////////////////

int MyABS(float Number) {
  if (Number > 0)
    return Number;
  else
    return Number * -1;
}

float ReadNumber() {
  float Number;
  cout << "Please Enter a Number?" << endl;
  cin >> Number;
  return Number;
}


int main() {
  float Number = ReadNumber();
  cout << "My abs Result Is : " << MyABS(Number) << endl;
  cout << "C++ abs Result Is : " << abs(Number) << endl;


}