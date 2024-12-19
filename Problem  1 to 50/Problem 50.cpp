#include <iostream>
#include <cmath>
using namespace std;
///////////////////  Print ~ sqrt ~ Of Numbers , don`t Use Build In sqrt Function  ///////////////////

float GetFractionPart(float Number) {
    return Number - int(Number);
}

int MySqrt(int Number) {
    return pow(Number, 0.5);
}

float ReadNumber() {
    float Number;
    cout << "Please Enter a float Number?" << endl;
    cin >> Number;
    return Number;
}

int main() {
    float Number = ReadNumber();
    cout << "My Sqrt Result Is  : " << MySqrt(Number) << endl;
    cout << "C++ Sqrt Result Is : " << sqrt(Number) << endl;


}