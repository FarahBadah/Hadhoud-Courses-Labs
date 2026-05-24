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

// دالة تعيد الرقم معكوساً
int ReverseNumber(int Number)
{
	int Remainder = 0, Number2 = 0;

	while (Number > 0) 
	{
		Remainder = Number % 10;           // استخراج الخانة الأخيرة
		Number = Number / 10;              // حذف الخانة المستخرجة من الرقم الأصلي
		Number2 = Number2 * 10 + Remainder; // المعادلة لبناء الرقم المعكوس
	}
	return Number2;
}

// دالة لطباعة النتيجة 
void PrintResult(int Number)
{
	cout << "\nReverse is = " << ReverseNumber(Number) << "\n";
}

int main()
{
  //تشغيل البرنامج واستدعاء الدوال
	PrintResult(ReadPositiveNumber("Please enter a positive number?"));

	return 0;  
}
