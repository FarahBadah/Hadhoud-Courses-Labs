#include <iostream>
#include <string>

using namespace std;

// دالة لقراءة عدد صحيح موجب من المستخدم
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

// دالة طباعة نمط الحروف التصاعدي المنتظم
void PrintLetterPattern(int Number)
{
    cout << "\n";

    // الحلقة الخارجية للتحكم في الأسطر (تصاعدية من 1 إلى Number)
    for (int i = 1; i <= Number; i++)
    {
        // الحلقة الداخلية لتكرار طباعة الحرف بعدد مرات يساوي رقم السطر الحالي
        for (int j = 1; j <= i; j++)
        {
            // حساب وطباعة الحرف المقابل للسطر الحالي باستخدام الـ ASCII
            cout << char(65 + i - 1);
        }
        
        cout << "\n";
    }
}

int main()
{
    // استدعاء الدوال
    PrintLetterPattern(ReadPositiveNumber("Please enter a positive number?"));

    return 0;
}
