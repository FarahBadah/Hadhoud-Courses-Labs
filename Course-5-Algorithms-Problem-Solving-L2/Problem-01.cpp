#include <iostream>
using namespace std;

// دالة لطباعة رأس الجدول والخطوط الفاصلة
void PrintTableHeader()
{
	cout << "\n\n\t\t\t Multiplication Table From 1 to 10 \n\n";
	cout << "\t";

	// حلقة لطباعة أرقام الأعمدة من 1 إلى 10
	for (int i = 1; i <= 10; i++) 
	{
		cout << i << "\t";
	}
	cout << "\n_____________________________________________________________________________________\n";
}

// دالة لضبط المسافات والفاصل الجانبي بناءً على رقم الصف
string Columsperator(int i)
{
	if (i < 10)
		return "   |";
	else
		return "  |";
}

// دالة طباعة جدول الضرب بالكامل
void PrintMultiplicationTable() 
{
	PrintTableHeader();

	// الحلقة الخارجية للتحكم في الصفوف (i)
	for (int i = 1; i <= 10; i++)
	{
		cout << " " << i << Columsperator(i) << "\t";

		// الحلقة الداخلية للتحكم في الأعمدة (j)
		for (int j = 1; j <= 10; j++) 
		{
			cout << i * j << "\t";
		}
		cout << endl; // النزول لسطر جديد بعد نهاية كل صف
	}
}

// الدالة الرئيسية لتشغيل البرنامج
int main() 
{
	PrintMultiplicationTable();
	return 0;
}
