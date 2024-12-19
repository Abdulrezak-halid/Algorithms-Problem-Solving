#include <iostream>
using namespace std;
//////////////////////  Fill Array With Numbers, Then Check  if it is Palindrome Array Or Not:            ////////////////////////
/////////////////////   Palindrome Array Can Be Read The Sane From Right to Left and From left to Right  ////////////////////////

void FillArray(int arr[100], int& arrLength) {
    arrLength = 8;
    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 50;
    arr[4] = 50;
    arr[5] = 10;
    arr[6] = 10;
    arr[7] = 10;
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << "  ";
    cout << "\n";
}

bool IsPalindromeArray(int arr[100], int Length)
{
    for (int i = 0; i < Length ; i++)
    {
        if (arr[i] != arr[Length - i - 1])
            return false;
    }
    return true;
}

int main() {

    int arr[100], Length = 0;
    FillArray(arr , Length);

    cout << "\nArray  Elements : \n";
    PrintArray(arr , Length);

    if (IsPalindromeArray(arr , Length))
        cout << "\n Yes , Array Is Palindrome\n";
    else
        cout << "\n No , Array Is Not Palindrome";
    return 0;
}
