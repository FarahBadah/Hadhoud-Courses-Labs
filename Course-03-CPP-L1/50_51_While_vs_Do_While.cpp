#include <iostream>
#include <string>

using namespace std;

// ==========================================================
// [الدرس 50]: While Loop Problems
// ==========================================================

// #26: Print Numbers 1 to N
void PrintNumbers1ToN(int N) 
{
    cout << "\n--- Problem #26: Numbers 1 to N (While) ---" << endl;
    int i = 1;
    while (i <= N) {
        cout << i << " ";
        i++;
    }
    cout << endl;
}

// #37: Sum Until -99 (While Version)
int SumUntilMinus99While()
{
    cout << "\n--- Problem #37: Sum Until -99 (While Version) ---" << endl;
    int Sum = 0, Num = 0;
    cout << "Enter numbers (Enter -99 to stop): " << endl;
    cin >> Num;
    while (Num != -99) {
        Sum += Num;
        cin >> Num;
    }
    return Sum;
}

// #50: ATM PIN (While Version)
void CheckATMPinWhile() 
{
    cout << "\n--- Problem #50: ATM PIN (While Version) ---" << endl;
    int PinCode = 1234, EnteredPin, FailedCounter = 0;
    while (FailedCounter < 3) {
        cout << "Please enter your PIN: ";
        cin >> EnteredPin;
        if (EnteredPin == PinCode) {
            cout << "Access Granted! Balance: 7500" << endl;
            return;
        }
        FailedCounter++;
        cout << "Wrong PIN! Attempts left: " << (3 - FailedCounter) << endl;
    }
    cout << "Card Locked!" << endl;
}

// ==========================================================
// [الدرس 51]: Do While Loop Problems
// ==========================================================

// قراءة رقم ضمن نطاق (Do While) - مثال الدرس الأساسي
int ReadIntNumberInRange(int From, int To)
{
    int Number;
    do {
        cout << "Please enter a number between " << From << " and " << To << ": " << endl;
        cin >> Number;
    } while (Number < From || Number > To);
    return Number;
}

// #37: Sum Until -99 (Do While Version)
int SumUntilMinus99DoWhile()
{
    cout << "\n--- Problem #37: Sum Until -99 (Do While Version) ---" << endl;
    int Sum = 0, Num;
    do {
        cout << "Enter a number (or -99 to stop): ";
        cin >> Num;
        if (Num != -99) Sum += Num;
    } while (Num != -99);
    return Sum;
}

// #50: ATM PIN (Do While Version)
void CheckATMPinDoWhile() 
{
    cout << "\n--- Problem #50: ATM PIN (Do While Version) ---" << endl;
    int PinCode = 1234, EnteredPin, FailedCounter = 0;
    do {
        cout << "Enter your PIN: ";
        cin >> EnteredPin;
        if (EnteredPin == PinCode) {
            cout << "Access Granted! Balance: 7500" << endl;
            return;
        }
        FailedCounter++;
        cout << "Wrong PIN! Attempts left: " << (3 - FailedCounter) << endl;
    } while (FailedCounter < 3);
    cout << "Card Locked!" << endl;
}

// ==========================================================
// Main Function
// ==========================================================

int main()
{
    cout << "========== LESSON 50 & 51: WHILE vs DO WHILE ==========\n";

    // 1. تجربة الـ PIN باستخدام النسختين
    CheckATMPinWhile();
    CheckATMPinDoWhile();

    cout << "\n------------------------------------------\n";

    // 2. تجربة الجمع حتى -99
    int Sum1 = SumUntilMinus99While();
    cout << "Total Sum (While): " << Sum1 << endl;
    
    int Sum2 = SumUntilMinus99DoWhile();
    cout << "Total Sum (Do While): " << Sum2 << endl;

    cout << "\n------------------------------------------\n";

    // 3. تجربة قراءة رقم في نطاق
    int ValidNum = ReadIntNumberInRange(18, 45);
    cout << "Valid Number entered: " << ValidNum << endl;

    return 0;
}
