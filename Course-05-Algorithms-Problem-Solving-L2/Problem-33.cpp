#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

// تعريف Enum لتحديد نوع الحرف المراد توليده
enum enCharType { SamllLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

// دالة لقراءة رقم موجب (عدد المفاتيح المطلوب توليدها)
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

// دالة لتوليد حرف عشوائي بناءً على نوعه
char GetRandomCharacter(enCharType CharType)
{
    switch (CharType)
    {
    case enCharType::SamllLetter:
        return char(RandomNumber(97, 122));
    case enCharType::CapitalLetter:
        return char(RandomNumber(65, 90));
    case enCharType::SpecialCharacter:
        return char(RandomNumber(33, 47));
    case enCharType::Digit:
        return char(RandomNumber(48, 57));
    }
}

// دالة لتوليد كلمة عشوائية تتكون من عدد معين من الأحرف
string GenerateWord(enCharType CharType, short Length)
{
    string Word = "";
    for (int i = 1; i <= Length; i++)
    {
        Word = Word + GetRandomCharacter(CharType);
    }
    return Word;
}

// دالة لتوليد مفتاح تفعيل كامل (يتكون من 4 مقاطع مفصولة بـ -)
string GenerateKey()
{
    string Key = "";
    Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4);
    return Key;
}

// دالة لتعبئة مصفوفة النصوص بالمفاتيح العشوائية
void FillArrayWithKeys(string arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        arr[i] = GenerateKey();
}

// دالة لطباعة عناصر مصفوفة النصوص (المفاتيح)
void PrintStringArray(string arr[100], int arrLength)
{
    cout << "\nArray elements:\n\n";
    for (int i = 0; i < arrLength; i++)
    {
        cout << "Array[" << i << "] : ";
        cout << arr[i] << "\n";
    }
    cout << "\n";
}

int main()
{
    // تهيئة مولد الأرقام العشوائية
    srand((unsigned)time(NULL));

    string arr[100];
    int arrLength = 0;

    // 1. قراءة عدد المفاتيح المراد إدخالها
    arrLength = ReadPositiveNumber("How many keys do you want to generate?");

    // 2. تعبئة المصفوفة بالمفاتيح
    FillArrayWithKeys(arr, arrLength);

    // 3. طباعة المفاتيح من داخل المصفوفة
    PrintStringArray(arr, arrLength);

    return 0;
}
