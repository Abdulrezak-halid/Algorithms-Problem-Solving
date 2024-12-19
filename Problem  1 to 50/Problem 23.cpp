#include <iostream>
using namespace std;
//////////////////////  Fill Array With Max Size 100 With Random Numbers From 1 to 100   //////////////////////

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

int main() {
    int arr[100] , arrLength;

    srand((unsigned)time(NULL));

    FillaArrayWithRandomNumbers(arr, arrLength);

    cout <<"\nRandom Array Elements : ";
    PrintArray(arr, arrLength);

    return 0;
}
