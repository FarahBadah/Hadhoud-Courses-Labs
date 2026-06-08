#include <iostream>
#include <string>

using namespace std;

// 1. دالة لقراءة عدد صحيح موجب من المستخدم
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

// 2. دالة عكس الرقم
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

// 3. دالة الفحص المنطقية
bool IsPalindromeNumber(int Number)
{
    return Number == ReverseNumber(Number);
}

int main()
{
    if (IsPalindromeNumber(ReadPositiveNumber("Please enter a positive number?")))
    {
        cout << "\nYes , it is a Palindrome number.\n";
    }
    else
    {
        cout << "\nNo , it is NOT a Palindrome number.\n";
    }

    return 0;
}
