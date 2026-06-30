#include <iostream>
#include <string>
#include <cstdlib> // مكتبة تحتوي على دالتي الأرقام العشوائية rand و srand
#include <ctime>   // مكتبة الوقت لاستخراج وقت النظام الحالي

using namespace std;

// دالة لتوليد رقم عشوائي محصور بين نطاقين
int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

// دالة لملء المصفوفة بأرقام عشوائية تلقائياً من 1 إلى 100
void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << "\nPlease enter number of elements:\n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = RandomNumber(1, 100); // إسناد رقم عشوائي لكل خانة في المصفوفة
    }
}

// دالة لطباعة عناصر المصفوفة بشكل أفقي
void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    // بذر مولد الأرقام العشوائية باستخدام وقت النظام الحالي لضمان عدم التكرار
    srand((unsigned)time(NULL));

    int arr[100], arrLength;

    // 1- استدعاء دالة تعبئة المصفوفة عشوائياً
    FillArrayWithRandomNumbers(arr, arrLength);

    // 2- طباعة عناصر المصفوفة المتولدة
    cout << "\nArray elements: ";
    PrintArray(arr, arrLength);

    return 0;
}
