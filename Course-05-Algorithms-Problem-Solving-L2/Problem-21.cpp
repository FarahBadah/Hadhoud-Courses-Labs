#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// تعريف الـ Enum لتحديد أنواع الرموز والحروف
enum enCharType { 
    SamallLetter = 1, 
    CapitalLetter = 2, 
    SpecialCharacter = 3, 
    Digit = 4 
};

// دالة لتوليد رقم عشوائي ضمن نطاق محدد
int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

// دالة للحصول على حرف عشوائي بناءً على نوعه
char GetRandomCharacter(enCharType CharType)
{
    switch (CharType)
    {
    case enCharType::SamallLetter:
    {
        return char(RandomNumber(97, 122));
        break;
    }
    case enCharType::CapitalLetter:
    {
        return char(RandomNumber(65, 90));
        break;
    }
    case enCharType::SpecialCharacter:
    {
        return char(RandomNumber(33, 47));
        break;
    }
    case enCharType::Digit:
    {
        return char(RandomNumber(48, 57));
        break;
    }
    }
    return '\0';
}

// دالة لتوليد كلمة عشوائية مكوّنة من عدد معين من الأحرف
string GetWord(enCharType CharType, short Length)
{
    string Word = "";
    for (int i = 1; i <= Length; i++)
    {
        Word = Word + GetRandomCharacter(CharType);
    }
    return Word;
}

// دالة لتوليد مفتاح كامل مكوّن من 4 أجزاء تفصل بينها شرطة
string GenerateKey()
{
    string Key = "";
    Key = GetWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GetWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GetWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GetWord(enCharType::CapitalLetter, 4);
    return Key;
}

// دالة لتوليد وطباعة مجموعة من المفاتيح بناءً على العدد المطلوب
void GenerateKeys(short NumberOfKeys)
{
    for (int i = 1; i <= NumberOfKeys; i++)
    {
        cout << "Key [" << i << "] : " << GenerateKey() << "\n";
    }
}

// دالة لقراءة رقم موجب من المستخدم للتأكد من صحة المدخلات
int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

int main()
{
    // بذر مولد الأرقام العشوائية باستخدام وقت النظام الحالي
    srand((unsigned)time(NULL));

    // قراءة عدد المفاتيح من المستخدم وتوليدها فوراً
    GenerateKeys(ReadPositiveNumber("Please enter how many keys to generate? \n"));
    
    return 0;
}
