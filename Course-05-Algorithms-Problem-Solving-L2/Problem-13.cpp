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

// دالة طباعة النمط التصاعدي (Regular Pattern) 
void PrintPattern(int Number)
{
    cout << "\n";
    
    // الحلقة الخارجية تبدأ من 1 وتتصاعد حتى الرقم المدخل (لإدارة الأسطر)
    for (int i = 1; i <= Number; i++)
    {
        // الحلقة الداخلية تطبع رقم السطر الحالي (i) بعدد مرات يساوي قيمته
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << "\n";
    }
}

int main()
{
    // استدعاء الدوال
    PrintPattern(ReadPositiveNumber("Please enter a positive number?"));

    return 0;
}
