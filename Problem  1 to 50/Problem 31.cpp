#include <iostream>
using namespace std;
//////////////////////  Fill Array With Max Size 100 With Random Numbers From 1 to 100   //////////////////////
//////////////////////  Sum Their elements in a third Array and Print The Results       //////////////////////

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

int RandomNumber(int From, int To)
{
    //Function to generate a random number
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void Swap(int & A, int & B) {
    int temp = A;
    A = B;
    B = temp;
}

void FillArrayWith1ToNumber(int arr[100] , int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        arr[i] = i + 1;
    }
}

void ShuffleArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        Swap(arr[RandomNumber(1,arrLength) - 1], arr[RandomNumber(1, arrLength) - 1]);
    }
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " , ";
    cout << "\n";
}

int main() {
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    int arr[100], arr2[100], arrSum[100];
    int arrLength = ReadPositiveNumber("Enter Of Elements ?");

    FillArrayWith1ToNumber(arr, arrLength);

    cout << "\nArray Elements Before Shuffle : \n";
    PrintArray(arr, arrLength);

    ShuffleArray(arr, arrLength);

    cout << "\nArray Elements After Shuffle : \n";
    PrintArray(arr, arrLength);

    return 0;
}

