#include <iostream>
#include <string>
using namespace std;
//////////////////////  Read a Number And Print Letter Pattern  //////////////////////

int ReadPositiveNumber(string Masage)
{
    int Number = 0;
    do {
        cout << Masage << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

void PrintLetterPattern(int Number) {
    for (int i = 1; i <= Number; i++) {
        for (int j = 1; j <= i; j++) {
            cout << char(i + 64);
        }
        cout << "\n";
    }
}

int main() {
    PrintLetterPattern(ReadPositiveNumber("Please Enter a Positive Number : "));
    return 0;

}