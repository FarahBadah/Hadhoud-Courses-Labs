#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// ==========================================================
// [Lesson 34] Procedure vs Function (The Difference)
// ==========================================================

// إجراء (Procedure): ينفذ مهمة الطباعة مباشرة ولا يعيد قيمة
void MySumProcedure() 
{
    int Num1, Num2;
    cout << "\n[L34] Procedure - Enter two numbers: " << endl;
    cin >> Num1 >> Num2;
    cout << "Result inside Procedure: " << Num1 + Num2 << endl;
}

// دالة (Function): تحسب وتعيد قيمة (return) لنستخدمها لاحقاً
int MySumFunction() 
{
    int Num1, Num2;
    cout << "[L34] Function - Enter two numbers: " << endl;
    cin >> Num1 >> Num2;
    return Num1 + Num2;
}

// ==========================================================
// [Lesson 35] Homework Problems (1 to 43)
// ==========================================================

// [#1] Print Name Procedure
void PrintMyName(string Name) 
{
    cout << "\n[#1] My Name is: " << Name << endl;
}

// [#2] Read and Print Name
string ReadName()
{
    string Name;
    cout << "[#2] Please enter your name: ";
    getline(cin >> ws, Name); 
    return Name;
}

// [#14] Swap (Pass by Reference)
void Swap(int& Num1, int& Num2) 
{
    int Temp = Num1;
    Num1 = Num2;
    Num2 = Temp;
}

// [#15 & #16] Rectangle Area Functions
float CalculateRectangleArea(float a, float b) 
{
    return a * b;
}

float RectangleAreaBySideAndDiagonal(float a, float d) 
{
    return a * sqrt(pow(d, 2) - pow(a, 2));
}

// [#18 to #23] Circle Area Laws
const float PI = 3.14;

float CircleAreaByRadius(float r) { return PI * r * r; }
float CircleAreaByDiameter(float D) { return (PI * D * D) / 4; }
float CircleAreaInscribedInSquare(float A) { return (PI * A * A) / 4; }
float CircleAreaByCircumference(float L) { return (L * L) / (4 * PI); }
float CircleAreaInIsoscelesTriangle(float a, float b) {
    return (PI * b * b / 4) * ((2 * a - b) / (2 * a + b));
}
float CircleAreaAroundTriangle(float a, float b, float c) 
{
    float P = (a + b + c) / 2;
    float T = (a * b * c) / (4 * sqrt(P * (P - a) * (P - b) * (P - c)));
    return PI * T * T;
}

// [#31 & #32] Powers
void PrintPowerOf2_3_4(int Num)
{
    cout << "\n[#31] Powers of " << Num << ": 2nd=" << Num*Num << ", 3rd=" << Num*Num*Num << ", 4th=" << Num*Num*Num*Num << endl;
}

int CalculatePower(int Num, int M)
{
    return pow(Num, M);
}

// [#42 & #43] Time Conversion
int CalculateTotalSeconds(int Days, int Hours, int Minutes, int Seconds)
{
    return (Days * 24 * 3600) + (Hours * 3600) + (Minutes * 60) + Seconds;
}

void ConvertSecondsToTime(int TotalSeconds) 
{
    int Days = TotalSeconds / (24 * 3600);
    int Remainder = TotalSeconds % (24 * 3600);
    int Hours = Remainder / 3600;
    Remainder %= 3600;
    int Minutes = Remainder / 60;
    int Seconds = Remainder % 60;
    cout << "[#43] Time Format: " << Days << ":" << Hours << ":" << Minutes << ":" << Seconds << endl;
}

// ==========================================================
// Main Function: Executing All Lessons
// ==========================================================
int main() 
{
    // --- Execution Lesson 34 ---
    cout << "===== Lesson 34: Procedure vs Function =====" << endl;
    MySumProcedure();
    cout << "Result from Function (printed in main): " << MySumFunction() << endl;

    // --- Execution Lesson 35 ---
    cout << "\n===== Lesson 35: Homework Problems =====" << endl;
    
    // #1 & #2
    PrintMyName("Farah");
    string Name = ReadName();
    cout << "Name from Function: " << Name << endl;

    // #14
    int x = 10, y = 20;
    cout << "\n[#14] Before Swap: x=" << x << ", y=" << y;
    Swap(x, y);
    cout << " | After Swap: x=" << x << ", y=" << y << endl;

    // #15 & #16
    cout << "[#15] Rect Area (5x10): " << CalculateRectangleArea(5, 10) << endl;
    cout << "[#16] Rect Area (Side 5, Diag 13): " << RectangleAreaBySideAndDiagonal(5, 13) << endl;

    // Circle Laws (Examples)
    cout << "\n--- Circle Laws (Selected) ---" << endl;
    cout << "[#18] Area by Radius(5): " << CircleAreaByRadius(5) << endl;
    cout << "[#23] Area Around Triangle(5,6,7): " << CircleAreaAroundTriangle(5, 6, 7) << endl;

    // Powers
    PrintPowerOf2_3_4(3);
    cout << "[#32] 2 to the Power 5: " << CalculatePower(2, 5) << endl;

    // Time
    int TotalSec = CalculateTotalSeconds(2, 5, 45, 30);
    cout << "\n[#42] Total Seconds: " << TotalSec << endl;
    ConvertSecondsToTime(TotalSec); // #43

    return 0;
}
