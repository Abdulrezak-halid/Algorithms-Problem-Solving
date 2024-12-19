#include <iostream>
using namespace std;
//////////////////////  Fill Array With Max Size 100 With Random Numbers From 1 to 100 then Print Average Of All Numbers   //////////////////////

int RandomNumber(int From, int To)
{
    //Function to generate a random number
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int arr[100] , int& arrLength) {
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

int SumOfAllNumbers(int arr[100] , int arrLength) {
    int sum = 0;
    for (int i = 0; i < arrLength; i++) {
        sum += arr[i];
    }
    return sum;
}

float ArrayAvg(int arr[100] , int arrLength) {
    return (float) SumOfAllNumbers(arr, arrLength) / arrLength;
}

int main() {
    int arr[100] , arrLength;

    srand((unsigned)time(NULL));

    FillArrayWithRandomNumbers(arr, arrLength);

    cout <<"\nRandom Array Elements : ";
    PrintArray(arr, arrLength);

    cout << "\nArray Average : ";
    cout <<ArrayAvg(arr, arrLength);

    return 0;
}
