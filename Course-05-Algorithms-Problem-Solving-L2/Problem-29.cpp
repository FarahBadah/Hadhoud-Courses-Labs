#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

// تعريف Enum لنتيجة فحص الرقم الأولي
enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

// دالة لفحص هل الرقم أولي أم لا
enPrimeNotPrime CheckPrime(int Number)
{
    int M = round(Number / 2);
    for (int Counter = 2; Counter <= M; Counter++)
    {
        if (Number % Counter == 0)
            return enPrimeNotPrime::NotPrime; // ليس أولياً
    }
    return enPrimeNotPrime::Prime; // أولي
}

// دالة لتوليد رقم عشوائي
int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

// دالة لتعبئة المصفوفة بأرقام عشوائية
void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

// دالة لطباعة عناصر المصفوفة
void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

// دالة لنسخ الأرقام الأولية فقط إلى المصفوفة الجديدة
void CopyOnlyPrimeNumbers(int arrSource[100], int arrDestination[100], int arrLength, int& arr2Length)
{
    int Counter = 0; // عداد عناصر المصفوفة الجديدة

    for (int i = 0; i < arrLength; i++)
    {
        // إذا كان الرقم أولياً نضعه في المصفوفة الجديدة ونزيد العداد
        if (CheckPrime(arrSource[i]) == enPrimeNotPrime::Prime)
        {
            arrDestination[Counter] = arrSource[i];
            Counter++;
        }
    }

    arr2Length = Counter; // حفظ الطول الحقيقي للمصفوفة الجديدة
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength;

    // 1. تعبئة المصفوفة الأولى بأرقام عشوائية
    FillArrayWithRandomNumbers(arr, arrLength);

    // 2. نسخ الأرقام الأولية فقط إلى arr2
    int arr2[100], arr2Length = 0;
    CopyOnlyPrimeNumbers(arr, arr2, arrLength, arr2Length);

    // 3. طباعة العناصر
    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);

    cout << "\nArray 2 Prime Numbers:\n";
    PrintArray(arr2, arr2Length);

    return 0;
}

