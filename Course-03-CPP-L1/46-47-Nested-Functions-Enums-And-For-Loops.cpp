#include <iostream>
#include <string>

using namespace std;

// ==========================================================
// #46 Nested Functions with Enums
// ==========================================================

enum enWeekDay { sun = 1, mon = 2, tue = 3, wed = 4, thu = 5, fri = 6, sat = 7 };

void ShowWeekDayMenu()
{
    cout << "******************************************" << endl;
    cout << " Week Day " << endl;
    cout << "******************************************" << endl;
    cout << " 1 : sunday " << endl;
    cout << " 2 : monday " << endl;
    cout << " 3 : tuesday " << endl;
    cout << " 4 : wednesday " << endl;
    cout << " 5 : thursday " << endl;
    cout << " 6 : friday " << endl;
    cout << " 7 : saturday " << endl;
    cout << "******************************************" << endl;
    cout << " please enter the number of day ? " << endl;
}

enWeekDay ReadWeekDay()
{
    int wd;
    cin >> wd;
    return (enWeekDay)wd;
}

string GetWeekDayName(enWeekDay WeekDay)
{
    switch (WeekDay)
    {
    case enWeekDay::sun:
        return "sunday";
        break;
    case enWeekDay::mon:
        return "monday";
        break;
    case enWeekDay::tue:
        return "tuesday";
        break;
    case enWeekDay::wed:
        return "wednesday";
        break;
    case enWeekDay::thu:
        return "thursday";
        break;
    case enWeekDay::fri:
        return "friday";
        break;
    case enWeekDay::sat:
        return "saturday";
        break;
    default:
        return "not a week day !!\n";
    }
}

// ==========================================================
// #47 حلقات اللوب (For Loop Problems)
// ==========================================================

void PrintNumbers1ToN(int N)
{
    cout << "\n--- Problem #26: Numbers 1 to N ---" << endl;
    for (int i = 1; i <= N; i++) 
    {
        cout << i << endl;
    }
}

void PrintNumbersNTo1(int N) {
    cout << "\n--- Problem #27: Numbers N to 1 ---" << endl;
    for (int i = N; i >= 1; i--) {
        cout << i << endl;
    }
}

int SumOddNumbers1ToN(int N) 
{
    int Sum = 0;
    for (int i = 1; i <= N; i++)
        {
        if (i % 2 != 0) Sum += i;
        }
    return Sum;
}

int SumEvenNumbers1ToN(int N) 
{
    int Sum = 0;
    for (int i = 1; i <= N; i++)
        {
        if (i % 2 == 0) Sum += i;
        }
    return Sum;
}

long long Factorial(int N)
{
    long long Fact = 1;
    for (int i = N; i >= 1; i--)
        {
        Fact *= i;
        }
    return Fact;
}

long long PowerOfM(int Num, int M) 
{
    if (M == 0) return 1;
    long long P = 1;
    for (int i = 1; i <= M; i++)
        {
        P = P * Num;
        }
    return P;
}

void PrintLettersAToZ()
{
    cout << "\n--- Problem #46: Letters A to Z ---" << endl;
    for (int i = 65; i <= 90; i++) 
    {
        cout << char(i) << " ";
    }
    cout << endl;
}

// ==========================================================
// الدالة الرئيسية 
// ==========================================================

int main()
{
    // --- تطبيق الدرس 46 ---
    ShowWeekDayMenue();
    // استخدام الـ Nested Function Call
    cout << "today is: " << GetWeekDayName(ReadWeekDay()) << endl;

    cout << "\n------------------------------------------\n";

    // --- تطبيق الدرس 47 ---
    int N, M;
    cout << "Enter N: "; cin >> N;

    PrintNumbers1ToN(N);
    PrintNumbersNTo1(N);

    cout << "\nSum of Odds: " << SumOddNumbers1ToN(N) << endl;
    cout << "Sum of Evens: " << SumEvenNumbers1ToN(N) << endl;
    cout << "Factorial: " << Factorial(N) << endl;

    cout << "\n--- Problem #32: Power of M ---" << endl;
    cout << "Enter Power (M): "; cin >> M;
    cout << "Result: " << N << "^" << M << " = " << PowerOfM(N, M) << endl;

    PrintLettersAToZ();

    return 0;
}
