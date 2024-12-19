#include <iostream>
using namespace std;

//////////////////////    Fill Array With Max Size 100 With Random Numbers From 1 to 100,     ////////////////////////
/////////////////////     Then Print The Count Of Odd Numbers                                /////////////////////////

int RandomNumber(int From, int To)
{
    //Function to generate a random number
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << "\nEnter Number of Elements:\n";
    cin >> arrLength;
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " , ";
    cout << "\n";
}

int OddCount(int arr[100], int arrLength) {
    int Count = 0;
    for (int i = 0; i < arrLength; i++) {
        if (arr[i] % 2 != 0) {
            Count++;
        }
    }
    return Count;
}


int main() {
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    int arr[100], arrLength = 0;
    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray  Elements:\n";
    PrintArray(arr, arrLength);

    cout << "\nOdd Numbers Count Is : ";
    cout << OddCount(arr, arrLength) << endl;

    return 0;
}