#include <iostream>
#include <cstdlib>
using namespace std;

// دالة لتوليد رقم عشوائي ضمن مجال محدد
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

// دالة نسخ عناصر المصفوفة المصدر إلى المصفوفة الهدف
void CopyArray(int arrSource[100], int arrDestination[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        arrDestination[i] = arrSource[i]; // نسخ العنصر الحالي
}

int main()
{
    // تهيئة مولد الأرقام العشوائية بناءً على الوقت
    srand((unsigned)time(NULL));

    int arr[100], arrLength;

    // 1. تعبئة المصفوفة الأولى
    FillArrayWithRandomNumbers(arr, arrLength);

    // 2. إنشاء مصفوفة ثانية ونسخ العناصر إليها
    int arr2[100];
    CopyArray(arr, arr2, arrLength);

    // 3. طباعة المصفوفة الأولى والثانية
    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);

    cout << "\nArray 2 elements after copy:\n";
    PrintArray(arr2, arrLength);

    return 0;
}
