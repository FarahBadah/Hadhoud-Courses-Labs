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

// دالة طباعة نمط الحروف المقلوب 
void PrintInvertedLetterPattern(int Number)
{
    cout << "\n";

    // الحلقة الخارجية تبدأ من قيمة ASCII للحرف الأخير وتتناقص حتى 'A' (65)
    for (int i = 65 + Number - 1; i >= 65; i--)
    {
        // الحلقة الداخلية 
        for (int j = 1; j <= Number - (65 + Number - 1 - i); j++)
        {
            cout << char(i);
        }
        
        cout << "\n";
    }
}

int main()
{
    // استدعاء لدوال
    PrintInvertedLetterPattern(ReadPositiveNumber("Please enter a positive number?"));

    return 0;
}
