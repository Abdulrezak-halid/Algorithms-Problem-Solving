#include <iostream>
#include <cmath>
using namespace std;
///////////////////  Print ~ round ~ Of Numbers , don`t Use Build In round Function  ///////////////////

float GetFractionPart(float Number) {
    return Number - int(Number);
}

int MyRound(float Number) {
    int IntPart;
    IntPart = int(Number);

    float FractionPart = GetFractionPart(Number);

    if (abs(FractionPart) >= .5) {
        if (Number > 0)
            return ++IntPart;
        else
            return --IntPart;
    }
    else {
        return IntPart;
    }
}

float ReadNumber() {
    float Number;
    cout << "Please Enter a float Number?" << endl;
    cin >> Number;
    return Number;
}

int main() {
    float Number = ReadNumber();
    cout << "My round Result Is  : " << MyRound(Number) << endl;
    cout << "C++ round Result Is : " << round(Number) << endl;


}