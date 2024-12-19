#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
//////////////////////    Dynamically Read Nubers and Save Them In an Array    ////////////////////////
/////////////////////     Max Size Of Array Simi-Dynamic Array Length         /////////////////////////

int ReadNumber() {
    int Number;
    cout << "\nPlease Enter a Number :\n";
    cin >> Number;

    return Number;
}

void AddArrayElement(int Number , int arr[100], int& arrLength)
{
    arrLength++;
    arr[arrLength - 1] = Number;

}

void InputUserNumberInArray(int arr[100], int& arrLength) {
    bool AddMore = true;
    do {
        AddArrayElement(ReadNumber(), arr, arrLength);

        cout << "\nDo You Want To Add More Numbers ? (YES [1] / NO [0]) : ";
        cin >> AddMore;
    } while (AddMore);

}

void PrintArray(int arr[100] , int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " , ";
    }
}

int main() {

    srand((unsigned)time(NULL));

    int arr[100] , arrLength = 0;
    InputUserNumberInArray(arr, arrLength);

    cout << "\nArray Length : " << arrLength << endl;
    cout << "Array Elements : ";
    PrintArray(arr, arrLength);

    return 0;
}