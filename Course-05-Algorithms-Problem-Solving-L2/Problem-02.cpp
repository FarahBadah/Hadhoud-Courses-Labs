#include <iostream>
#include <string>

using namespace std;

// معرف لتحديد حالة العدد (أولي أو غير أولي)
enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

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

// دالة تفحص هل العدد أولي أم لا
enPrimeNotPrime CheckPrime(int Number)
{
	int M = round(Number / 2); // m هي نصف الرقم 

	for (int counter = 2; counter <= M; counter++)
	{
		if (Number % counter == 0)
			return enPrimeNotPrime::NotPrime; // يخرج فوراً إذا قبل القسمة
	}
	return enPrimeNotPrime::Prime; // يكون أولياً إذا لم يقبل القسمة
}

// دالة لطباعة الأعداد الأولية من 1 إلى N
void printPrimeNumbersFrom1ToN(int Number)
{
	cout << "\n";
	cout << "Prime Numbers from " << 1 << " To " << Number;
	cout << " are : " << endl;

	// حلقة تمر على الأرقام لفحصها وطباعتها
	for (int i = 1; i <= Number; i++)
	{
		if (CheckPrime(i) == enPrimeNotPrime::Prime)
		{
			cout << i << endl;
		}
	}
}

int main()
{
	// استدعاء الدوال وتشغيل البرنامج
	printPrimeNumbersFrom1ToN(ReadPositiveNumber("please enter apositive number ?"));

	return 0;
}
