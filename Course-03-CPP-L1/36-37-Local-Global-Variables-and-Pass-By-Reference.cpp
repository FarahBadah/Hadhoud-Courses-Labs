#include <iostream>
#include <string>

using namespace std;

// ==========================================================
// [Lesson 36] Local vs Global Variables
// ==========================================================
int x = 300; // Global Variable (يعيش في كل البرنامج)

void TestScope()
{
    int x = 500; // Local Variable (خاص بهذه الدالة فقط)
    cout << "\n Inside Function (Local x): " << x << endl;
    cout << " Accessing Global x using (::): " << ::x << endl;
}

// ==========================================================
// [Lesson 37] Pass by Value vs Reference
// ==========================================================

// مثال 1: التغيير الحقيقي باستخدام الـ Reference (&)
void ChangeValue(int &Num)
{
    Num = 7000;
}

// مثال 2: التبديل (بدون & لن يغير القيم الأصلية - Pass by Value)
void SwapByValue(int A, int B)
{
    int Temp = A;
    A = B;
    B = Temp;
    cout << "[L37] Inside SwapByValue: A=" << A << ", B=" << B << endl;
}

// مثال 3: التبديل الحقيقي (باستخدام & - Pass by Reference)
void SwapByReference(int &A, int &B)
{
    int Temp = A;
    A = B;
    B = Temp;
}

int main()
{
    // --- تطبيق درس 36 ---
    cout << "===== Lesson 36: Scope =====" << endl;
    int x = 10; // Local in Main
    cout << "Local x in Main: " << x << endl;
    TestScope();

    cout << "\n-----------------------------\n";

    // --- تطبيق درس 37 ---
    cout << "===== Lesson 37: Reference =====" << endl;
    
    int MyNumber = 1000;
    cout << "Original Number: " << MyNumber << endl;
    ChangeValue(MyNumber);
    cout << "Number after ChangeValue (&): " << MyNumber << endl;

    cout << "\n--- Testing Swap ---" << endl;
    int a = 5, b = 10;
    
    cout << "Before Swap: a=" << a << ", b=" << b << endl;
    SwapByValue(a, b);
    cout << "After SwapByValue (Inside Main): a=" << a << ", b=" << b << " (No Change!)" << endl;
    
    SwapByReference(a, b);
    cout << "After SwapByReference (Inside Main): a=" << a << ", b=" << b << " (Changed!)" << endl;

    return 0;
}
