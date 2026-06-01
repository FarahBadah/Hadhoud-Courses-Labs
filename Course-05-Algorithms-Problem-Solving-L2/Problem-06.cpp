#include <iostream>
#include <string>

using namespace std;

// دالة لقراءة عدد صحيح موجب من المستخدم
int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

// دالة تقوم بحساب مجموع خانات الرقم
int SumOfDigits(int Number)
{
	int Sum = 0, Remainder = 0;

	while (Number > 0) 
	{
		Remainder = Number % 10; // استخراج الخانة الأخيرة
		Number = Number / 10;    // حذف الخانة المستخرجة من الرقم
		Sum = Sum + Remainder;   // إضافة الخانة إلى صندوق المجموع
	}
	return Sum;
}

// دالة لطباعة النتيجة 
void PrintResult(int Number)
{
	cout << "\nSum Of Digits = " << SumOfDigits(Number) << "\n";
}

int main()
{
	// تشغيل البرنامج
	PrintResult(ReadPositiveNumber("Please enter a positive number?"));

	return 0;
}
