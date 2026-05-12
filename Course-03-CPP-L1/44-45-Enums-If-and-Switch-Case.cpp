#include <iostream>

using namespace std;

// تعريف القائمة المرقمة للألوان
enum enScreenColor { red = 1, blue = 2, green = 3, yellow = 4 };

int main()
{
    cout << "********************************\n";
    cout << "Please choose the number of your color?\n";
    cout << "(1) Red\n";
    cout << "(2) Blue\n";
    cout << "(3) Green\n";
    cout << "(4) Yellow\n";
    cout << "********************************\n";
    cout << "Your choice? ";

    int c;
    enScreenColor color;
    cin >> c;
    
    // تحويل الرقم المدخل إلى نوع الـ Enum
    color = (enScreenColor)c;

    // --- [الدرس 44]: التطبيق باستخدام if...else ---
    /*
    if (color == enScreenColor::red)
    {
        system("color 4f");
    }
    else if (color == enScreenColor::blue)
    {
        system("color 1f");
    }
    else if (color == enScreenColor::green)
    {
        system("color 2f");
    }
    else if (color == enScreenColor::yellow)
    {
        system("color 6f");
    }
    else
    {
        system("color 0f");
    }
    */

    // --- [الدرس 45]: التطبيق باستخدام Switch Case (أكثر تنظيماً) ---
    switch (color)
    {
    case enScreenColor::red:
        system("color 4f");
        break;
    case enScreenColor::blue:
        system("color 1f");
        break;
    case enScreenColor::green:
        system("color 2f");
        break;
    case enScreenColor::yellow:
        system("color 6f");
        break;
    default:
        system("color 0f"); // اللون الافتراضي في حال أدخل رقم خاطئ
        break;
    }

    return 0;
}
