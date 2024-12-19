#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
//////////////////////    Fill Array With Max Size 100 With Random Numbers From 1 to 100 with random  Numbers    ////////////////////////
/////////////////////     From 1 to 100 , Read Number and Print if it`s Found or Not (Reuse Code In Prev Problem)  /////////////////////////

int RandomNumber(int From, int To)
{
    //Function to generate a random number
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillaArrayWithRandomNumbers(int arr[100] , int& arrLength) {
    cout << "Enter Number Of Elements : ";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++) {
        arr[i] = RandomNumber(1, 100);
    }
    cout << endl;
}

void PrintArray(int arr[100] , int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " , ";
    }
}

short FindNumberPositionInArray(int Number, int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        if (arr[i] == Number)
            return i;
    }
    return -1;
}

bool IsNumberInArray(int Number , int arr[100] , int arrLength) {

    return FindNumberPositionInArray(Number , arr , arrLength) != -1;
}

int ReadNumber() {
    int Number;
    cout << "\nPlease Enter a Number to Search For ?\n";
    cin >> Number;

    return Number;
}

int main() {

    srand((unsigned)time(NULL));

    int arr[100] , arrLength;
    FillaArrayWithRandomNumbers(arr, arrLength);

    cout <<"Array 1 Elements : \n";
    PrintArray(arr, arrLength);

    cout << "\n";

    int Number = ReadNumber();
    cout << "\nNumber You Are Looking For Is : " << Number << "\n\n";

    if (!IsNumberInArray(Number , arr, arrLength))
        cout << "~~~~~ No , The Number Is Not Found :-( ~~~~~\n";
    else {
        cout << "~~~~~ Yes , The Number Found Is Found :-) ~~~~~\n";
    }
    return 0;
}