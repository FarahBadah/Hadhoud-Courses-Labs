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

// دالة لحساب تكرار خانة معينة داخل الرقم
int CountDigitFrequency(short DigitToCheck, int Number)
{
    int FreqCount = 0;   
    int Remainder = 0;   
    
    while (Number > 0)
    {
        Remainder = Number % 10;  
        Number = Number / 10;     
        
        if (DigitToCheck == Remainder)
        {
            FreqCount++;
        }
    }
    return FreqCount;  
}

// دالة لطباعة النتيجة 
void PrintResult(short DigitToCheck, int Number)
{
    cout << "\nDigit " << DigitToCheck << " Frequency is "
         << CountDigitFrequency(DigitToCheck, Number) << " Time(s).\n";
}

int main()
{
    // 1. قراءة الرقم الرئيسي
    int Number = ReadPositiveNumber("Please enter the main number?");
    
    // 2. قراءة الخانة المراد البحث عنها (تسمح بالصفر وتمنع الأرقام السالبة)
    short DigitToCheck;
    do {
        cout << "Please enter one digit to check (0 to 9)?" << endl;
        cin >> DigitToCheck;
    } while (DigitToCheck < 0 || DigitToCheck > 9);
    
    // 3. طباعة النتيجة النهائية 
    PrintResult(DigitToCheck, Number);
    
    return 0;  
}
