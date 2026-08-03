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

// دالة لتبديل قيمتين (Swap)
void Swap(int& A, int& B)
{
    int Temp = A;
    A = B;
    B = Temp;
}

// دالة لتعبئة المصفوفة بأرقام مرتبة من 1 إلى N
void FillArrayWith1ToN(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        arr[i] = i + 1;
}

// دالة لخلط عناصر المصفوفة بشكل عشوائي 
void ShuffleArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        // توليد مؤشرين عشوائيين ضمن النطاق الصحيح للمصفوفة
        int index1 = RandomNumber(1, arrLength) - 1;
        int index2 = RandomNumber(1, arrLength) - 1;

        // تبديل العنصرين الموجودين عند المؤشرين العشوائيين
        Swap(arr[index1], arr[index2]);
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
    int arr[100];

    // 2. تعبئة المصفوفة بأرقام من 1 إلى N
    FillArrayWith1ToN(arr, arrLength);

    // 3. طباعة العناصر قبل الخلط
    cout << "\nArray elements before shuffle:\n";
    PrintArray(arr, arrLength);

    // 4. خلط العناصر عشوائياً
    ShuffleArray(arr, arrLength);

    // 5. طباعة العناصر بعد الخلط
    cout << "\nArray elements after shuffle:\n";
    PrintArray(arr, arrLength);

    return 0;
}
