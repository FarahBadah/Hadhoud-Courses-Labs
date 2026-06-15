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

// دالة طباعة النمط المقلوب (Inverted Pattern)د
void PrintInvertedPattern(int Number)
{
    cout << "\n";
    
    // الحلقة الخارجية تبدأ من الرقم المدخل وتتناقص (لإدارة الأسطر)
    for (int i = Number; i >= 1; i--)
    {
        // الحلقة الداخلية تطبع رقم السطر الحالي (i) بعدد مرات يساوي قيمته
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        
        // الانتقال لسطر جديد بعد نهاية كل صف
        cout << "\n";
    }
}

int main()
{
    // استدعاء مباشر
    PrintInvertedPattern(ReadPositiveNumber("Please enter a positive number?"));

    return 0;
}
