#include <iostream>
using namespace std;
//////////////////////  Fill Array With Max Size 100 With Random Numbers From 1 to 100 Copy it To Another Array And Print it  //////////////////////

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

void CopyArray(int arrSource[100] , int arrDestination[100] , int arrLength) {
    for (int i = 0; i < arrLength; i++)
        arrDestination[i] = arrSource[i];
}


int main() {

    srand((unsigned)time(NULL));

    int arr[100] , arrLength;
    FillaArrayWithRandomNumbers(arr, arrLength);

    int arr2[100];
    CopyArray(arr , arr2 , arrLength);

    cout << "Array 1 Elements : \n";
    PrintArray(arr , arrLength);
    cout <<"\n";
    cout << "\nArray 2 Elements : \n";
    PrintArray(arr2 , arrLength);


    return 0;
}
