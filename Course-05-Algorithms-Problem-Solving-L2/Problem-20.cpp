#include <iostream>
#include <string>   
#include <cstdlib>    // مكتبة تحتوي على دالتي rand و srand لتشغيل العشوائية
#include <ctime>      // مكتبة الوقت لاستخراج وقت النظام الحالي واستخدامه كبذرة

using namespace std;  

// دالة توليد رقم عشوائي محصور بين قيمتين 
int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

// تعريف الـ Enum لتصنيف أنواع الحروف والرموز 
enum enCharType 
{ 
    SamallLetter = 1,    // الأحرف الصغيرة (من 97 إلى 122 في جدول ASCII)
    CapitalLetter = 2,   // الأحرف الكبيرة (من 65 إلى 90 في جدول ASCII)
    SpecialCharacter = 3,// الرموز الخاصة (من 33 إلى 47 في جدول ASCII)
    Digit = 4            // الأرقام (من 48 إلى 57 في جدول ASCII)
};

// دالة جلب حرف عشوائي بناءً على النوع المختار
char GetRandomCharacter(enCharType CharType)
{
    // فحص النوع الممرر للدالة باستخدام switch
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
    
    // إرجاع حرف فارغ كإجراء أمان في حال إدخال نوع غير معرف
    return '\0';
}

int main()
{
    // بذر مولد الأرقام العشوائية باستخدام وقت النظام الحالي لضمان عدم تكرار نفس الأرقام في كل تشغيل
    srand((unsigned)time(NULL));

    // طباعة عنصر عشوائي واحد من كل تصنيف على الشاشة بالترتيب المطلوب
    cout << GetRandomCharacter(enCharType::SamallLetter) << endl;      // حرف صغير عشوائي
    cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;     // حرف كبير عشوائي
    cout << GetRandomCharacter(enCharType::SpecialCharacter) << endl;  // رمز خاص عشوائي
    cout << GetRandomCharacter(enCharType::Digit) << endl;             // رقم عشوائي

    return 0;
}
