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

// دالة لطباعة عناصر المصفوفة
void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

// دالة لقراءة رقم من المستخدم للبحث عنه
int ReadNumber()
{
    int Number;
    cout << "\nPlease enter a number to search for?\n";
    cin >> Number;
    return Number;
}

// دالة تبحث عن الرقم وترجع موقعه (Index) أو -1 إذا لم تجده
short FindNumberPositionInArray(int Number, int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == Number)
            return i;
    }
    return -1;
}

// دالة تفحص هل الرقم موجود في المصفوفة أم لا وتُرجع true أو false
bool IsNumberInArray(int Number, int arr[100], int arrLength)
{
    return FindNumberPositionInArray(Number, arr, arrLength) != -1;
}

int main()
{
    // تهيئة مولد الأرقام العشوائية
    srand((unsigned)time(NULL));

    int arr[100], arrLength;

    // 1. تعبئة وطباعة المصفوفة
    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);

    // 2. قراءة الرقم المراد البحث عنه
    int NumberToSearch = ReadNumber();
    cout << "\nNumber you are looking for is: " << NumberToSearch << endl;

    // 3. التحقق من وجود الرقم وطباعة النتيجة
    if (!IsNumberInArray(NumberToSearch, arr, arrLength))
        cout << "No, The number is not found :-(\n";
    else
        cout << "Yes, The number is found :-)\n";

    return 0;
}
