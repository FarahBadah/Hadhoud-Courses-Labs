#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

// دالة حساب المجموع التراكمي لعناصر المصفوفة (من مسألة 26)
int SumNumbersInArray(int arr[100], int arrLength)
{
    int Sum = 0;
    for (int i = 0; i < arrLength; i++)
    {
        Sum += arr[i]; 
    }
    return Sum;
}

// دالة حساب المتوسط بناءً على دالة المجموع السابقة
float AverageNumbersInArray(int arr[100], int arrLength)
{
    // استدعاء دالة المجموع وقسمتها على عدد العناصر مع التحويل الفوري لـ float
    return (float)SumNumbersInArray(arr, arrLength) / arrLength;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength = 10; 

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray elements: ";
    PrintArray(arr, arrLength);

    // حساب وطباعة المعدل المتوسط النهائي
    cout << "\nAverage of all numbers is: ";
    cout << AverageNumbersInArray(arr, arrLength) << endl;

    return 0;
}
