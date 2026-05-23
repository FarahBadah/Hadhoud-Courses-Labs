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

// دالة تفحص هل الرقم كامل (Perfect) أم لا
bool isPerfectNumber(int Number)
{
	int Sum = 0;

	// حلقة لجمع القواسم وتتوقف قبل الرقم نفسه
	for (int i = 1; i < Number; i++)
	{
		if (Number % i == 0)
			Sum += i;
	}
	return Number == Sum;
}

// دالة لطباعة الأعداد الكاملة من 1 إلى N
void printPerfectNumberFrom1ToN(int Number)
{
	// حلقة تمر على الأرقام وتستدعي دالة الفحص لكل رقم
	for (int i = 1; i <= Number; i++)
	{
		if (isPerfectNumber(i))
		{
			cout << i << endl;
		}
	}
}

int main()
{
	// تشغيل البرنامج واستدعاء الدوال
	printPerfectNumberFrom1ToN(ReadPositiveNumber("please enter apositive number ?"));

	return 0;
}
