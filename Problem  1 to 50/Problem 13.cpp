#include <iostream>
#include <string>
using namespace std;
//////////////////////  Read a Number And Print Inverted Number Pattern as Follows  //////////////////////

int ReadPositiveNumber(string Masage)
{
    int Number = 0;
    do {
        cout << Masage << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

void PrintInvertedNumberPattern(int Number) {
    for (int i = 1; i <= Number; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << "\n";
    }
}

int main() {
    PrintInvertedNumberPattern(ReadPositiveNumber("Please Enter a Positive Number : "));
    return 0;

}