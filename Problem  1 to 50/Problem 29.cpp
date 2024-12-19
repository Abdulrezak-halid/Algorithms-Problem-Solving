#include <iostream>
#include <cmath>
using namespace std;
//////////////////////  Fill Array With Max Size 100 With Random Numbers From 1 to 100 Copy Only Prime Numbers to Another Array and Print it  //////////////////////

enum enPrimeNotPrime { Prime = 1 , NotPrime = 2 };

enPrimeNotPrime CheckPrime(int Number) {
    int M = round(Number / 2);
    for (int counter = 2; counter <= M; counter++) {
        if (Number % counter == 0)
            return enPrimeNotPrime::NotPrime;
    }
    return enPrimeNotPrime::Prime;
}

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

void CopyOnlyPrimeNumbers(int arrSource[100], int arrDestination[100] , int arrLength , int& arr2Length) {
    int counter = 0;
    for (int i = 0; i < arrLength; i++) {
        if (CheckPrime(arrSource[i]) == enPrimeNotPrime::Prime) {
            arrDestination[counter] = arrSource[i];
            counter++;
        }
    }
    arr2Length = --counter;
}

void PrintArray(int arr[100] , int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " , ";
    }
}

int main() {

    srand((unsigned)time(NULL));

    int arr[100] , arrLength;
    FillArrayWithRandomNumbers(arr, arrLength);

    int arr2[100], arr2Length = 0;
    CopyOnlyPrimeNumbers(arr , arr2 , arrLength , arr2Length);

    cout << "\nArray 1 Elements : \n";
    PrintArray(arr , arrLength);

    cout << "\nPrime Numbers in Array 2 : \n";
    PrintArray(arr2 , arr2Length);

    return 0;
}
