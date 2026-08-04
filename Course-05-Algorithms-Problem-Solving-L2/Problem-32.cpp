#include <iostream>
#include <cstdlib>
using namespace std;

// دالة لتوليد رقم عشوائي ضمن مجال محدد
int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

// دالة لتعبئة مصفوفة بأرقام عشوائية
void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

// دالة لنسخ عناصر المصفوفة بشكل معكوس
void CopyArrayInReverseOrder(int arrSource[100], int arrDestination[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        // إسناد العناصر من نهاية المصدر إلى بداية الوجهة
        arrDestination[i] = arrSource[arrLength - 1 - i];
    }
}

// دالة لطباعة عناصر المصفوفة
void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

int main()
{
    // تهيئة مولد الأرقام العشوائية
    srand((unsigned)time(NULL));

    int arr[100], arrLength;

    // 1. تعبئة المصفوفة الأولى بأرقام عشوائية
    FillArrayWithRandomNumbers(arr, arrLength);

    int arr2[100];
    
    // 2. نسخ عناصر المصفوفة الأولى إلى الثانية مع العكس
    CopyArrayInReverseOrder(arr, arr2, arrLength);

    // 3. طباعة المصفوفة الأصلية والمصفوفة المعكوسة
    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);

    cout << "\nArray 2 elements after copy in reverse order:\n";
    PrintArray(arr2, arrLength);

    return 0;
}

