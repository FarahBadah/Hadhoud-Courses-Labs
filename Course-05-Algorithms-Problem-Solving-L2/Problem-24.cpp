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

// دالة للبحث عن القيمة العظمى داخل المصفوفة وإرجاعها
int MaxNumberInArray(int arr[100], int arrLength)
{
    int Max = arr[0]; // افتراض أن العنصر الأول هو الأكبر مؤقتاً

    for (int i = 1; i < arrLength; i++) // حلقة تبدأ من العنصر الثاني
    {
        if (arr[i] > Max) // إذا وجدنا عنصراً أكبر من الأكبر الحالي
        {
            Max = arr[i]; // تحديث قيمة الأكبر
        }
    }
    return Max; // إرجاع أكبر قيمة تم العثور عليها
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength = 10; // تحديد حجم ثابت للمصفوفة وهو 10 عناصر

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray elements: ";
    PrintArray(arr, arrLength);

    // طباعة القيمة القصوى المرتجعة من الدالة
    cout << "\nMax Number is: ";
    cout << MaxNumberInArray(arr, arrLength) << endl;

    return 0;
}
