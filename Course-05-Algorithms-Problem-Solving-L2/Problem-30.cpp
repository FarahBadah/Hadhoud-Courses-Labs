#include <iostream>
#include <cstdlib>
using namespace std;

// دالة لقراءة رقم موجب (عدد عناصر المصفوفة)
int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

// دالة لتوليد رقم عشوائي ضمن مجال محدد
int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

// دالة لتعبئة مصفوفة بأرقام عشوائية
void FillArrayWithRandomNumbers(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

// دالة لجمع عناصر مصفوفتين وتخزين الناتج في مصفوفة ثالثة
void SumOf2Arrays(int arr1[100], int arr2[100], int arrSum[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        // جمع العنصر من الأولى مع العنصر المقابل من الثانية
        arrSum[i] = arr1[i] + arr2[i]; 
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

    // 1. قراءة عدد العناصر
    int arrLength = ReadPositiveNumber("How many elements ?");

    int arr1[100], arr2[100], arrSum[100];

    // 2. تعبئة المصفوفتين الأولى والثانية بأرقام عشوائية
    FillArrayWithRandomNumbers(arr1, arrLength);
    FillArrayWithRandomNumbers(arr2, arrLength);

    // 3. جمع المصفوفتين في المصفوفة الثالثة arrSum
    SumOf2Arrays(arr1, arr2, arrSum, arrLength);

    // 4. طباعة المصفوفة الأولى والثانية والمجموع
    cout << "\nArray 1 elements:\n";
    PrintArray(arr1, arrLength);

    cout << "\nArray 2 elements:\n";
    PrintArray(arr2, arrLength);

    cout << "\nSum of Array 1 and Array 2 elements:\n";
    PrintArray(arrSum, arrLength);

    return 0;
}
