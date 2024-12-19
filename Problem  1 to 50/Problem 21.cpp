#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
//////////////////////  Read How Many Keys To Generate And Print Them   //////////////////////

enum enCharType { smallLetter = 'a' , CapitalLetter = 'A' , SpecialLetter = 3 , Digit = 4 };

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

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
        Word = Word + GetRandomLetter(CharType);
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

void GenerateKeys(short NumberOfKeys) {
    for (int i =1; i <= NumberOfKeys; i++) {

        cout << "Key [" << i << "] = ";
        cout << GenerateKey() << endl;
    }
}

int main() {

    srand((unsigned)time(NULL));

    GenerateKeys(ReadPositiveNumber("Please Enter How Many Keys To Generate ? \n"));



}
