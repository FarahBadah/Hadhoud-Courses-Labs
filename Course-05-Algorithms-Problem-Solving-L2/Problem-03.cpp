#include <iostream>
#include <string>

using namespace std;

// دالة لقراءة عدد صحيح موجب
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

// دالة تفحص هل الرقم كامل (Perfect) أم لا
bool isPerfectNumber(int Number)
{
	int Sum = 0;

	// حلقة تتوقف قبل الرقم نفسه لتجنب جمعه
	for (int i = 1; i < Number; i++)
	{
		if (Number % i == 0)
			Sum += i; // جمع القواسم الصحيحة
	}
	return Number == Sum; // مقارنة المجموع بالرقم الأصلي
}

// دالة لطباعة النتيجة
void printResult(int Number)
{
	if (isPerfectNumber(Number))
		cout << Number << " Is Perfect Number.\n";
	else
		cout << Number << " Is Not Perfect Number.\n";
}

int main()
{
	// تشغيل البرنامج
	printResult(ReadPositiveNumber("please enter apositive number ?"));

	return 0;
}
