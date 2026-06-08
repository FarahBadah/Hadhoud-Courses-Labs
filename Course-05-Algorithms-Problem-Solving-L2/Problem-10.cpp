#include <iostream>
#include <string>

using namespace std;

// 1. دالة قراءة الرقم
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

// 2. دالة عكس الرقم (مسألة 7)
int ReverseNumber(int Number)
{
    int Remainder = 0;
    int Number2 = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        Number2 = (Number2 * 10) + Remainder;
    }
    return Number2;
}

// 3. دالة تفكيك وطباعة الأرقام المقلوبة 
void PrintDigits(int Number)
{
    int Remainder = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        cout << Remainder << endl;
    }
}

int main()
{
    // أقرأ الرقم من المستخدم (مثلاً: 1234)
    int Number = ReadPositiveNumber("Please enter a positive number?");

    //  نعكس الرقم أولاً (يصبح 4321) ثم نمرره لدالة الطباعة لتطبعه (1 ثم 2 ثم 3 ثم 4)
    PrintDigits(ReverseNumber(Number));

    return 0;
}
