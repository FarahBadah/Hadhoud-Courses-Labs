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

// دالة للبحث عن القيمة الصغرى داخل المصفوفة وإرجاعها
int MinNumberInArray(int arr[100], int arrLength)
{
    int Min = arr[0]; // افتراض أن العنصر الأول هو الأصغر مؤقتاً

    for (int i = 1; i < arrLength; i++) // حلقة تبدأ من العنصر الثاني
    {
        if (arr[i] < Min) // إذا وجدنا عنصراً أصغر من الأصغر الحالي
        {
            Min = arr[i]; // تحديث قيمة الأصغر
        }
    }
    return Min; // إرجاع أصغر قيمة تم العثور عليها
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength = 10;

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray elements: ";
    PrintArray(arr, arrLength);

    // طباعة القيمة الدنيا المرتجعة من الدالة
    cout << "\nMin Number is: ";
    cout << MinNumberInArray(arr, arrLength) << endl;

    return 0;
}
