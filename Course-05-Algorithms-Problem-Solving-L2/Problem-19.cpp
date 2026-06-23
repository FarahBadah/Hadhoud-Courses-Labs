#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// دالة توليد رقم عشوائي محصور بين نطاقين محددين
int RandomNumber(int From, int To)
{
    // معادلة حصر الرقم العشوائي في نطاق معين
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

int main()
{
    //  بذر مولد الأرقام العشوائية باستخدام وقت النظام الحالي
    srand((unsigned)time(NULL));

    // طباعة 3 أرقام عشوائية بين 1 و 10
    cout << RandomNumber(1, 10) << endl;
    cout << RandomNumber(1, 10) << endl;
    cout << RandomNumber(1, 10) << endl;

    return 0;
}
