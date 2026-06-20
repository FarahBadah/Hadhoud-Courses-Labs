#include <iostream>
#include <string>

using namespace std;

// دالة تطلب من المستخدم إدخال كلمة مرور من 3 حروف كبيرة
string ReadPassword()
{
    string Password;
    cout << "Please enter a 3-Letter Password (all capital): \n";
    cin >> Password;
    return Password;
}

// دالة تخمين كلمة المرور وحساب عدد المحاولات
bool GuessPassword(string OriginalPassword)
{
    string word = "";
    int Counter = 0; // عداد لحساب عدد المحاولات

    cout << "\n";

    // ثلاث حلقات متداخلة لتوليد جميع الاحتمالات من AAA إلى ZZZ
    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
            {
                Counter++; // زيادة العداد مع كل محاولة تخمين
                
                word = "";
                word.append(1, char(i));
                word.append(1, char(j));
                word.append(1, char(k));

                // طباعة المحاولة الحالية
                cout << "Trial [" << Counter << "] : " << word << "\n";

                // إذا تطابقت الكلمة المخمنة مع كلمة المرور الأصلية
                if (word == OriginalPassword)
                {
                    cout << "\nPassword is " << word << "\n";
                    cout << "Found after " << Counter << " Trial(s)\n";
                    return true; // إنهاء الدالة فوراً عند النجاح
                }
            }
        }
    }
    return false;
}

int main()
{
    // استدعاء الدوال
    GuessPassword(ReadPassword());

    return 0;
}
