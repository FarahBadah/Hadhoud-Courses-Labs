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

// دالة تحسب تكرار خانة واحدة معينة داخل الرقم (تم بناؤها في المسألة 8)
int CountDigitFrequency(short DigitToCheck, int Number)
{
    int FreqCount = 0;
    int Remainder = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;

        if (DigitToCheck == Remainder)
        {
            FreqCount++;
        }
    }
    return FreqCount;
}

// دالة المسألة 9: تمر على الخانات من 0 إلى 9 وتطبع تكرار الخانات الموجودة فعلياً
void PrintAllDigitsFrequency(int Number)
{
    int FreqCount = 0;

    for (int i = 0; i <= 9; i++)
    {
        FreqCount = CountDigitFrequency(i, Number);

        //  نطبع الخانة فقط إذا كان عدد مرات تكرارها أكبر من صفر
        if (FreqCount > 0)
        {
            cout << "Digit " << i << " Frequency is " << FreqCount << " Time(s).\n";
        }
    }
}

int main()
{
    // 1. قراءة الرقم الرئيسي من المستخدم
    int Number = ReadPositiveNumber("Please enter the main number?");

    // 2. استدعاء دالة الطباعة لعرض النتائج 
    PrintAllDigitsFrequency(Number);

    return 0;
}
