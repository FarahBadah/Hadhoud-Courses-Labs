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

// دالة لحساب المجموع التراكمي لجميع عناصر المصفوفة
int SumNumbersInArray(int arr[100], int arrLength)
{
    int Sum = 0; // تصفير متغير المجموع لتبدأ العملية بشكل صحيح

    for (int i = 0; i < arrLength; i++) // حلقة تمر على جميع العناصر من البداية
    {
        Sum += arr[i]; // إضافة قيمة العنصر الحالي إلى المجموع التراكمي
    }
    return Sum; // إرجاع الناتج الإجمالي النهائي
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength = 10;

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray elements: ";
    PrintArray(arr, arrLength);

    // طباعة إجمالي مجموع العناصر المرتجع من الدالة
    cout << "\nSum of all numbers is: ";
    cout << SumNumbersInArray(arr, arrLength) << endl;

    return 0;
}
