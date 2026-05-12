#include <iostream>
#include <string>

using namespace std;

// --- Problem #11: Average Pass or Fail ---
enum enPassFail { Pass = 1, Fail = 2 };

void Read3Marks(int& Mark1, int& Mark2, int& Mark3) {
    cout << "Problem #11: Enter Mark 1, 2, 3:" << endl;
    cin >> Mark1 >> Mark2 >> Mark3;
}

int SumOf3Numbers(int Mark1, int Mark2, int Mark3) {
    return Mark1 + Mark2 + Mark3;
}

float CalculateAverage(int Mark1, int Mark2, int Mark3) {
    return (float)SumOf3Numbers(Mark1, Mark2, Mark3) / 3;
}

enPassFail CheckAverage(float Average) {
    if (Average >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

void PrintAverageResult(float Average) {
    cout << "\nThe Average is: " << Average << endl;
    if (CheckAverage(Average) == enPassFail::Pass)
        cout << "Result: You Passed" << endl;
    else
        cout << "Result: You Failed" << endl;
    cout << "-----------------------------------------" << endl;
}

// --- Problem #12: Max of 2 Numbers ---
void Read2Numbers(int& Num1, int& Num2) {
    cout << "Problem #12: Enter Number 1 & 2: " << endl;
    cin >> Num1 >> Num2;
}

int MaxOf2Numbers(int Num1, int Num2) {
    if (Num1 > Num2)
        return Num1;
    else
        return Num2;
}

// --- Problem #13: Max of 3 Numbers ---
void Read3Numbers(int& A, int& B, int& C) {
    cout << "Problem #13: Enter Number 1, 2, 3: " << endl;
    cin >> A >> B >> C;
}

int MaxOf3Numbers(int A, int B, int C) {
    if (A > B)
        if (A > C)
            return A;
        else
            return C;
    else
        if (B > C)
            return B;
        else
            return C;
}

// --- Problem #14: Swap 2 Numbers ---
void Swap(int& A, int& B) {
    int Temp;
    Temp = A;
    A = B;
    B = Temp;
}

// --- Problem #15: Rectangle Area ---
void ReadRectangleDimensions(float& A, float& B) {
    cout << "Problem #15: Enter Rectangle Width A & Length B: " << endl;
    cin >> A >> B;
}

float CalculateRectangleArea(float A, float B) {
    return A * B;
}

int main() {
    // Execution for Problem 11
    int M1, M2, M3;
    Read3Marks(M1, M2, M3);
    PrintAverageResult(CalculateAverage(M1, M2, M3));

    // Execution for Problem 12
    int Num1, Num2;
    Read2Numbers(Num1, Num2);
    cout << "The Maximum Number is: " << MaxOf2Numbers(Num1, Num2) << endl;
    cout << "-----------------------------------------" << endl;

    // Execution for Problem 13
    int A, B, C;
    Read3Numbers(A, B, C);
    cout << "The Maximum Number is: " << MaxOf3Numbers(A, B, C) << endl;
    cout << "-----------------------------------------" << endl;

    // Execution for Problem 14
    int val1 = 10, val2 = 20;
    cout << "Problem #14: Before Swap: A=" << val1 << ", B=" << val2 << endl;
    Swap(val1, val2);
    cout << "After Swap: A=" << val1 << ", B=" << val2 << endl;
    cout << "-----------------------------------------" << endl;

    // Execution for Problem 15
    float Width, Length;
    ReadRectangleDimensions(Width, Length);
    cout << "Rectangle Area = " << CalculateRectangleArea(Width, Length) << endl;

    return 0;
}
