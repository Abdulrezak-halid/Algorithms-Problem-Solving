#include <iostream>
#include <cmath>
using namespace std;
///////////////////  Print ~ floor ~ Of Numbers , don`t Use Build In floor Function  ///////////////////

float GetFractionPart(float Number) {
    return Number - int(Number);
}

int MyFloor(float Number) {
    int IntPart;
    IntPart = int(Number);

    float FractionPart = GetFractionPart(Number);

    if (abs(FractionPart) >= .9) {
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
    cout << "My floor Result Is  : " << MyFloor(Number) << endl;
    cout << "C++ floor Result Is : " << floor(Number) << endl;


}