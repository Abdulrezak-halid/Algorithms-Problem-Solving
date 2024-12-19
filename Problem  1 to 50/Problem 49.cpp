#include <iostream>
#include <cmath>
using namespace std;
///////////////////  Print ~ Ceil ~ Of Numbers , don`t Use Build In Ceil Function  ///////////////////

float GetFractionPart(float Number) {
    return Number - int(Number);
}

int MyCeil(float Number)
{
    if (abs(GetFractionPart(Number)) > 0)
        if (Number > 0)
            return int(Number) + 1;
        else
            return int(Number);
        else
            return Number;
}

float ReadNumber() {
    float Number;
    cout << "Please Enter a float Number?" << endl;
    cin >> Number;
    return Number;
}

int main() {
    float Number = ReadNumber();
    cout << "My Ceil Result Is  : " << MyCeil(Number) << endl;
    cout << "C++ Ceil Result Is : " << ceil(Number) << endl;


}