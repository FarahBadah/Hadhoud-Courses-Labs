#include <iostream>
#include <string>

using namespace std;

// Problems 46 to 50

// ==========================================================
// 1. الدوال المساعدة المشتركة 
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

string ReadPINCode() 
{
	string PINCode;
	cout << "please enter PIN Code: ";
	cin >> PINCode;
	return PINCode;
}

// ==========================================================
// Problem 46: Letters A to Z
// ==========================================================

void PrintLettersAtoZ() 
{
	for (int i = 65; i <= 90; i++)
	{
		cout << char(i) << endl;
	}
}

// ==========================================================
// Problem 47: Total Months to Pay Loan
// ==========================================================

float TotalMonth(float LoanAmount, float MonthlyInstallment) 
{
	return (float) LoanAmount / MonthlyInstallment;
}

// ==========================================================
// Problem 48: Monthly Installment Amount
// ==========================================================

float MonthlyInstallment(float LoanAmount, float HowManyMonths) 
{
	return (float) LoanAmount / HowManyMonths;
}

// ==========================================================
// Problem 49 & 50: Login Logic
// ==========================================================

bool Login() 
{
	string PINCode;
	int counter = 3; // عدد المحاولات (المسألة 50)
	
	do
	{
		counter--;
		PINCode = ReadPINCode();

		if (PINCode == "1234") 
		{
			return 1; // True
		}
		else 
		{
      	cout << "\n Wrong PIN , you have " << counter << " more tries\n";
			  system("color 4f"); // شاشة حمراء
		}

	} while (counter >= 1 && PINCode != "1234");

	return 0; // False
}

// ==========================================================
// دالة الـ Main لربط المسائل
// ==========================================================

int main() 
{
	// --- Problem 46 ---
	cout << "\n--- [Problem 46: A-Z] ---" << endl;
	PrintLettersAtoZ();

	// --- Problem 47 ---
	cout << "\n--- [Problem 47: Loan Period] ---" << endl;
	float LoanAmount = ReadPositiveNumber("please enter LoanAmount ?");
	float Installment = ReadPositiveNumber("please enter MonthlyInstallment ?");
	cout << "Total Months to pay = " << TotalMonth(LoanAmount, Installment) << endl;

	// --- Problem 48 ---
	cout << "\n--- [Problem 48: Monthly Amount] ---" << endl;
	float Months = ReadPositiveNumber("please enter How Many Months ?");
	cout << "Monthly Installment = " << MonthlyInstallment(LoanAmount, Months) << endl;

	// --- Problem 49 & 50 ---
	cout << "\n--- [Problem 49 & 50: ATM Login] ---" << endl;
	if (Login())
	{
		system("color 2f"); // شاشة خضراء
		cout << "\nYour account balance is 7500" << endl;
	}
	else
	{
		cout << "\nYour card blocked call the bank for help.\n";
	}

	return 0;
}
