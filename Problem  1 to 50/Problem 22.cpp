#include <iostream>
using namespace std;
//////////////////////  Read N Elements and Store Them In Array Then Print All Array Elements and   //////////////////////
/////////////////////   Ask For a Number To Check , Then Print How Many Number a Certain Element    //////////////////////
////////////////////    Repeated In That Array.                                                     //////////////////////

int ReadPositiveNumber(string Masage)
{
    int Number = 0;
    do {
        cout << Masage << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

void ReadArray(int arr[100] , int& arrLength) {
    cout << "Enter Number Of Elements : \n";
    cin >> arrLength;

    cout << "\nEnter Array Elements : \n";
    for (int i = 0; i < arrLength; i++) {
        cout << "Element [" << i + 1 << "] : ";
        cin >> arr[i];
    }
    cout << endl;
}

void PrintArray(int arr[100] , int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " ";

        cout << endl;
    }
}

int TimeRepeated(int Number, int arr[100], int arrLength) {
    int count = 0;
    for (int i = 0; i <= arrLength - 1; i++) {
        if (Number == arr[i]) {
            count ++;
        }
    }
    return count;

}

int main() {
    int arr[100] , arrLength , NumberToCheck;

    ReadArray(arr, arrLength);

    NumberToCheck = ReadPositiveNumber("Enter The Number You Want To Check :");

    cout << "\nOriginal Array : ";
    PrintArray(arr , arrLength);

    cout << "\nNumber "<< NumberToCheck;
    cout << " Is Repeated ";
    cout << TimeRepeated(NumberToCheck , arr, arrLength) << " Time(s)\n";

    return 0;


}
