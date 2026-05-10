#include <iostream>
#include <string>
#include <cmath>

using namespace std;


// ==========================================================
// الدوال المساعدة العامة (تستخدم في أكثر من مسألة)
// ==========================================================

float ReadPositiveNumber(string Message)
{
	float Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

// ==========================================================
// Problem 36: Simple Calculator
// ==========================================================

enum enOperationType { Add = '+', Subtract = '-', Multiply = '*', Divide = '/' };

enOperationType ReadOPType()
{
	char OT = '+';
	cout << "Please enter operation type ( +, -, *, /): ";
	cin >> OT;
	return (enOperationType)OT;
}

float Calculate(float Number1, float Number2, enOperationType OPType)
{
	switch (OPType)
	{
	case enOperationType::Add:
		return Number1 + Number2;
	case enOperationType::Subtract:
		return Number1 - Number2;
	case enOperationType::Multiply:
		return Number1 * Number2;
	case enOperationType::Divide:
		return Number1 / Number2;
	default:
		return Number1 + Number2;
	}
}

// ==========================================================
// Problem 37: Sum Until -99
// ==========================================================

float SumNumbers()
{
	float Sum = 0, Number = 0;
	int counter = 1;
	do 
	{
		cout << "Please enter Number " << counter << " (enter -99 to stop): ";
		cin >> Number;

		if (Number == -99) break;

		Sum += Number;
		counter++;

	} while (Number != -99);
	return Sum;
}

// ==========================================================
// Problem 38: Prime Number
// ==========================================================

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

enPrimeNotPrime CheckPrime(int Number)
{
	if (Number <= 1) return enPrimeNotPrime::NotPrime;

	int M = round(Number / 2); 
	for (int counter = 2; counter <= M; counter++)
	{
		if (Number % counter == 0)
			return enPrimeNotPrime::NotPrime;
	}
	return enPrimeNotPrime::Prime;
}

void PrintNumberType(int Number)
{
	if (CheckPrime(Number) == enPrimeNotPrime::Prime)
		cout << "The number is Prime\n";
	else
		cout << "The number is Not Prime\n";
}

// ==========================================================
// Problem 39: Pay Remainder
// ==========================================================

float CalculateRemainder(float TotalBill, float TotalCashPaid)
{
	return TotalCashPaid - TotalBill;
}

// ==========================================================
// Problem 40: Service Fee and Sales Tax
// ==========================================================

float TotalBillAfterServiceAndTax(float TotalBill)
{
	TotalBill = TotalBill * 1.1;  // Service Fee 10%
	TotalBill = TotalBill * 1.16; // Sales Tax 16%
	return TotalBill;
}

// ==========================================================
// Main Function
// ==========================================================

int main()
{
	// --- P36 ---
	cout << "================ [Problem 36] ================" << endl;
	float Num1 = ReadPositiveNumber("Please enter the first number:");
	float Num2 = ReadPositiveNumber("Please enter the second number:");
	enOperationType Op = ReadOPType();
	cout << "Result = " << Calculate(Num1, Num2, Op) << endl;

	// --- P37 ---
	cout << "\n================ [Problem 37] ================" << endl;
	cout << "Total Sum = " << SumNumbers() << endl;

	// --- P38 ---
	cout << "\n================ [Problem 38] ================" << endl;
	int NumberToCheck = ReadPositiveNumber("Please enter a positive number to check if Prime:");
	PrintNumberType(NumberToCheck);

	// --- P39 ---
	cout << "\n================ [Problem 39] ================" << endl;
	float Bill = ReadPositiveNumber("Please enter Total Bill:");
	float Cash = ReadPositiveNumber("Please enter Total Cash Paid:");
	cout << "Remainder = " << CalculateRemainder(Bill, Cash) << endl;

	// --- P40 ---
	cout << "\n================ [Problem 40] ================" << endl;
	float TotalBill = ReadPositiveNumber("Please enter Total Bill:");
	cout << "Total Bill After Fees and Tax = " << TotalBillAfterServiceAndTax(TotalBill) << endl;

	return 0;
}
