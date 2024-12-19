#include <iostream>
#include <cmath>
using namespace std;
//////////////////////  Fill Array With Max Size 100 With Random Numbers From 1 to 100 then Print Max Number   //////////////////////

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

int MaxArrayNumber(int arr[100] , int arrLength) {
    int Max = 0;
    for (int i = 0; i < arrLength; i++) {
        if (arr[i] > Max) {
            Max = arr[i];
        }
    }
    return Max;
}

int main() {
    int arr[100] , arrLength;

    srand((unsigned)time(NULL));

    FillaArrayWithRandomNumbers(arr, arrLength);

    cout <<"\nRandom Array Elements : ";
    PrintArray(arr, arrLength);

    cout << "\nMax Array Elements : ";
    cout << MaxArrayNumber(arr, arrLength);

    return 0;
}
