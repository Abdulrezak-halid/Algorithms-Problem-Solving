#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
//////////////////////      Read How Many Keys To Generate And Print Them in Array then Print  them on the Screen     /////////////////////////

enum enCharType { smallLetter = 'a' , CapitalLetter = 'A' , SpecialLetter = 3 , Digit = 4 };

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

char GetRandomCharacter(enCharType CharType) {
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

int ReadPositiveNumber(string Masage)
{
    int Number = 0;
    do {
        cout << Masage << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

string GenerateWord(enCharType CharType, short Length) {
    string Word;

    for (int i = 1; i <= Length; i++) {
        Word += GetRandomCharacter(CharType);
    }
    return Word;
}

string GenerateKey() {
    string key = "";

    key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
    key = key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    key = key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    key = key + GenerateWord(enCharType::CapitalLetter, 4) + "";

    return key;
}

void FillArrayWithKeys(string arr[100], int arrLength) {
    for (int i = 0; i <= arrLength; i++)
        arr[i] = GenerateKey();
}

void PrintStringArray(string arr[100], int arrLength)
{
    cout << "\nArray Elements Keyes : \n";
    cout << "----------------------\n";
    for (int i = 0; i < arrLength; i++) {
        cout << "Array[" << i << "] : ";
        cout << arr[i] << endl;
    }
    cout << endl;

    cout << "\n";
}

int main() {

    srand((unsigned)time(NULL));
    string arr[100];
    int arrLength = 0;

    arrLength = ReadPositiveNumber("How many keys do You Want To Generate ? ");

    FillArrayWithKeys(arr , arrLength);
    PrintStringArray(arr , arrLength);

    return 0;
}
