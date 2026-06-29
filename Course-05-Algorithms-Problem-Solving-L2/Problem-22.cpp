#include <iostream>
#include <string>

using namespace std;

// دالة لقراءة حجم المصفوفة وعناصرها يدوياً من المستخدم
void ReadArray(int arr[100], int& arrLength)
{
    cout << "\nPlease enter number of elements:\n";
    cin >> arrLength;

    cout << "\nEnter array elements: \n";
    for (int i = 0; i < arrLength; i++)
    {
        cout << "Element [" << i + 1 << "] : ";
        cin >> arr[i]; // تخزين الأرقام المدخلة داخل خانات المصفوفة
    }
    cout << endl;
}

// دالة لطباعة عناصر المصفوفة بشكل أفقي يفصل بينها مسافة
void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

// دالة لحساب كم مرة تكرر رقم معين داخل المصفوفة
int TimesRepeated(int Number, int arr[100], int arrLength)
{
    int Count = 0; // تصفير العداد قبل البدء بعملية الفحص
    for (int i = 0; i < arrLength; i++)
    {
        if (Number == arr[i]) // شرط فحص وتطابق القيمة
        {
            Count++; // زيادة العداد بمقدار 1 عند العثور على الرقم
        }
    }
    return Count; // إرجاع إجمالي عدد مرات التكرار
}

int main()
{
    int arr[100], arrLength, NumberToCheck;

    // 1- استدعاء دالة قراءة المصفوفة وحجمها
    ReadArray(arr, arrLength);

    // 2- قراءة الرقم المراد البحث عنه وتحديد تكراره
    cout << "\nEnter the number you want to check: ";
    cin >> NumberToCheck;

    // 3- طباعة عناصر المصفوفة الأصلية للتأكيد
    cout << "\nOriginal array: ";
    PrintArray(arr, arrLength);

    // 4- استدعاء دالة الحساب وطباعة النتيجة النهائية
    cout << "\nNumber " << NumberToCheck << " is repeated "
         << TimesRepeated(NumberToCheck, arr, arrLength) << " time(s)\n";

    return 0;
}
