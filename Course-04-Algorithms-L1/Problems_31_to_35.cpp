#include <iostream>
#include <string>

using namespace std;

// ==========================================================
// Problem 31: Power of 2, 3, 4
// ==========================================================

int ReadNumberP31() {
	int Number;
	cout << "Please enter a number for P31 (Power 2,3,4):" << endl;
	cin >> Number;
	return Number;
}

void PowerOf2_3_4(int Number) {
	int a = Number * Number;
	int b = Number * Number * Number;
	int c = Number * Number * Number * Number;
	cout << "Result P31: " << a << " " << b << " " << c << endl;
}

// ==========================================================
// Problem 32: Power of M
// ==========================================================

int ReadNumber() {
	int Number;
	cout << "Please enter the base number: ";
	cin >> Number;
	return Number;
}

int ReadPower() {
	int M;
	cout << "Please enter the power M: ";
	cin >> M;
	return M;
}

int PowerOfM(int Number, int M) {
	if (M == 0) return 1;
	int P = 1;
	for (int i = 1; i <= M; i++) {
		P = P * Number;
	}
	return P;
}

// ==========================================================
// Problem 33: Grade Letter
// ==========================================================

int ReadNumberInRange(int From, int To) {
	int Grade;
	do {
		cout << "Please enter a Grade between " << From << " and " << To << " ?" << endl;
		cin >> Grade;
	} while (Grade < From || Grade > To);
	return Grade;
}

char GetGradeLetter(int Grade) {
	if (Grade >= 90) return 'A';
	else if (Grade >= 80) return 'B';
	else if (Grade >= 70) return 'C';
	else if (Grade >= 60) return 'D';
	else if (Grade >= 50) return 'E';
	else return 'F';
}

// ==========================================================
// Problem 34: Commission Percentage
// ==========================================================

int ReadTotalSales() {
	int TotalSales;
	cout << "Please enter Total Sales?" << endl;
	cin >> TotalSales;
	return TotalSales;
}

float GetCommissionPercentage(float TotalSales) {
	if (TotalSales >= 1000000) return 0.01;
	else if (TotalSales >= 500000) return 0.02;
	else if (TotalSales >= 100000) return 0.03;
	else if (TotalSales >= 50000) return 0.05;
	else return 0.00;
}

float CalculateTotalCommission(float TotalSales) {
	return GetCommissionPercentage(TotalSales) * TotalSales;
}

// ==========================================================
// Problem 35: Piggy Bank Content
// ==========================================================

struct stPiggyBankContent {
	int Pennies, Nickels, Dimes, Quarters, Dollars;
};

stPiggyBankContent ReadPiggyBankContent() {
	stPiggyBankContent Content;
	cout << "Enter Pennies: "; cin >> Content.Pennies;
	cout << "Enter Nickels: "; cin >> Content.Nickels;
	cout << "Enter Dimes: ";   cin >> Content.Dimes;
	cout << "Enter Quarters: "; cin >> Content.Quarters;
	cout << "Enter Dollars: ";  cin >> Content.Dollars;
	return Content;
}

int CalculateTotalPennies(stPiggyBankContent Content) {
	return (Content.Pennies * 1) + (Content.Nickels * 5) + (Content.Dimes * 10) + (Content.Quarters * 25) + (Content.Dollars * 100);
}

// ==========================================================
// Main Function
// ==========================================================

int main() {
	// P31
	PowerOf2_3_4(ReadNumberP31());

	cout << "\n--- Problem 32 ---" << endl;
	int Num = ReadNumber();
	int Power = ReadPower();
	cout << "Result = " << PowerOfM(Num, Power) << endl;

	// P33
	cout << "\n--- Problem 33 ---" << endl;
	cout << "Grade Letter = " << GetGradeLetter(ReadNumberInRange(0, 100)) << endl;

	// P34
	cout << "\n--- Problem 34 ---" << endl;
	float TotalSales = ReadTotalSales();
	cout << "Commission Percentage = " << GetCommissionPercentage(TotalSales) << endl;
	cout << "Total Commission = " << CalculateTotalCommission(TotalSales) << endl;

	// P35
	cout << "\n--- Problem 35 ---" << endl;
	int TotalPennies = CalculateTotalPennies(ReadPiggyBankContent());
	cout << "Total Pennies = " << TotalPennies << endl;
	cout << "Total Dollars = " << (float)TotalPennies / 100 << endl;

	return 0;
}
