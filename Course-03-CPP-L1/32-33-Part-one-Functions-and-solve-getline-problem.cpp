#include <iostream>
#include <string>

using namespace std;

// --- [Lesson 32] Functions Part 1 ---

// وظيفة الفانكشن: طباعة الكارد الشخصي 
void PrintMyCard()
{
    cout << "****************************************" << endl;
    cout << "Name   : Farah." << endl; 
    cout << "Age    :  Age." << endl;
    cout << "City   : City." << endl;
    cout << "Country: Country." << endl;
    cout << "****************************************" << endl;
}

// وظيفة الفانكشن: طباعة النجوم 
void PrintStars
{
    cout << "********" << endl;
    cout << "********" << endl;
    cout << "********" << endl;
    cout << "********" << endl;
}

// وظيفة الفانكشن: طباعة نص الوعد 
void PrintLearningPromise() 
{
    cout << "I Love Programming!" << endl << endl;
    cout << "I promise to be the best developer ever!" << endl << endl;
    cout << "I know it will take some time to practice, but I will achieve my goal." << endl << endl;
    cout << "Best Regards," << endl;
    cout << "Farah." << endl;
}

int main() 
{
    // استدعاء الفانكشنز الخاصة بالواجبات
    PrintMyCard();
    cout << endl;

    PrintStars();
    cout << endl;

    PrintLearningPromise();
    
    cout << "\n----------------------------------------\n";

    // --- [Lesson 33] Solving the getline() Problem ---
    //  تطبيق المثال  لتعلم حل المشكلة
    
    int Number;
    string Name;
    string Country;

    cout << "Please enter Employee Number?\n";
    cin >> Number;

    cout << "Please enter Name?\n";
    
    cin.ignore(1, '\n'); 
    getline(cin, Name);

    cout << "Please enter Country?\n";
    cin >> Country;

    // طباعة النتائج النهائية 
    cout << "\nNumber: " << Number << " , Name: " << Name << " , Country: " << Country << endl;

    return 0;
}
