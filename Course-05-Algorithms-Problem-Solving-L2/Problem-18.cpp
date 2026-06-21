#include <iostream>
#include <string>

using namespace std;

// دالة لقراءة النص من المستخدم
string ReadText()
{
    string Text;
    cout << "Please enter your text:\n";
    getline(cin, Text); // استخدام getline لقراءة النص كاملاً مع المسافات
    return Text;
}

// دالة التشفير: تقوم بإضافة رقم (2) إلى قيمة الـ ASCII لكل حرف
string EncryptText(string Text, short EncryptionKey)
{
    for (int i = 0; i < Text.length(); i++)
    {
        Text[i] = char((int)Text[i] + EncryptionKey);
    }
    return Text;
}

// دالة فك التشفير: تقوم بطرح رقم (2) من قيمة الـ ASCII لإعادة الحرف لأصله
string DecryptText(string Text, short EncryptionKey)
{
    for (int i = 0; i < Text.length(); i++)
    {
        Text[i] = char((int)Text[i] - EncryptionKey);
    }
    return Text;
}

int main()
{
    const short EncryptionKey = 2; // مفتاح التشفير السري

    string Text = ReadText();
    string EncryptedText = EncryptText(Text, EncryptionKey);
    string DecryptedText = DecryptText(EncryptedText, EncryptionKey);

    // طباعة النتائج
    cout << "\nText Before Encryption : " << Text << "\n";
    cout << "Text After Encryption  : " << EncryptedText << "\n";
    cout << "Text After Decryption  : " << DecryptedText << "\n";

    return 0;
}
