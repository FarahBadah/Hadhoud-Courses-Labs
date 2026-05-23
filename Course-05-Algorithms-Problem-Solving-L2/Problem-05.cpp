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

// دالة لطباعة خانات الرقم بترتيب معكوس سطر بسطر
void printDigits(int Number)
{
	int Remainder = 0;

	while (Number > 0) 
	{
		Remainder = Number % 10;   // استخراج الخانة الأخيرة من الرقم
		Number = Number / 10;      // حذف الخانة الأخيرة من الرقم الأصلي
		cout << Remainder << endl; // طباعة الخانة المستخرجة في سطر جديد
	}
}

int main()
{
	// تشغيل البرنامج واستدعاء الدوال
	printDigits(ReadPositiveNumber("please enter apositive number ?"));

	return 0;
}
