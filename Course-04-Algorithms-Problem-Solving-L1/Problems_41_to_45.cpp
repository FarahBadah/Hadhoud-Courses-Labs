#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Problems 41 to 45

// ==========================================================
// 1. الدوال المساعدة المشتركة والـ Struct
// ==========================================================

float ReadPositiveNumber(string Message)
{
	float Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

int ReadNumberInRange(string Message, int From, int To)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < From || Number > To);

	return Number;
}

struct strTaskDuration
{
	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

// ==========================================================
// Problem 41: Time Conversion
// ==========================================================

float HoursToDays(float NumberOfHours)
{
	return (float)NumberOfHours / 24;
}

float DaysToWeeks(float NumberOfDays)
{
	return (float)NumberOfDays / 7;
}

float HoursToWeeks(float NumberOfHours)
{
	return (float)NumberOfHours / 24 / 7;
}

// ==========================================================
// Problem 42: Duration to Seconds
// ==========================================================

strTaskDuration ReadTaskDuration()
{
	strTaskDuration TaskDuration;
	TaskDuration.NumberOfDays = ReadPositiveNumber("please enter Number Of Days ?");
	TaskDuration.NumberOfHours = ReadPositiveNumber("please enter Number Of Hours ?");
	TaskDuration.NumberOfMinutes = ReadPositiveNumber("please enter Number Of Minutes ?");
	TaskDuration.NumberOfSeconds = ReadPositiveNumber("please enter Number Of Seconds ?");

	return TaskDuration;
}

int TaskDurationInSeconds(strTaskDuration TaskDuration)
{
	int DurationInSeconds = 0;
	DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
	DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
	DurationInSeconds += TaskDuration.NumberOfMinutes * 60;
	DurationInSeconds += TaskDuration.NumberOfSeconds;

	return DurationInSeconds;
}

// ==========================================================
// Problem 43: Seconds to Duration
// ==========================================================

strTaskDuration SecondsToTaskDuration(int TotalSeconds)
{
	strTaskDuration TaskDuration;
	const int SecondsPerDay = 24 * 60 * 60;
	const int SecondsPerHours = 60 * 60;
	const int SecondsPerMinutes = 60;

	int Remainder = 0;
	TaskDuration.NumberOfDays = floor(TotalSeconds / SecondsPerDay);
	Remainder = TotalSeconds % SecondsPerDay;
	
	TaskDuration.NumberOfHours = floor(Remainder / SecondsPerHours);
	Remainder = Remainder % SecondsPerHours;
	
	TaskDuration.NumberOfMinutes = floor(Remainder / SecondsPerMinutes);
	Remainder = Remainder % SecondsPerMinutes;
	
	TaskDuration.NumberOfSeconds = Remainder;

	return TaskDuration;
}

void PrintTaskDurationDetails(strTaskDuration TaskDuration)
{
	cout << "\nResult: ";
	cout << TaskDuration.NumberOfDays << ":"
		<< TaskDuration.NumberOfHours << ":"
		<< TaskDuration.NumberOfMinutes << ":"
		<< TaskDuration.NumberOfSeconds << "\n";
}

// ==========================================================
// Problem 44: Day lookup (Enums)
// ==========================================================

enum enDayOfWeek { Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7 };

enDayOfWeek ReadDayOfWeek()
{
	return (enDayOfWeek)ReadNumberInRange("Please enter day number (1-7): \n1:Sat, 2:Sun, 3:Mon, 4:Tue, 5:Wed, 6:Thu, 7:Fri", 1, 7);
}

string GetDayOfWeek(enDayOfWeek Day)
{
	switch (Day)
	{
	case enDayOfWeek::Sat: return "saturday";
	case enDayOfWeek::Sun: return "sunday";
	case enDayOfWeek::Mon: return "monday";
	case enDayOfWeek::Tue: return "tuesday";
	case enDayOfWeek::Wed: return "wednesday";
	case enDayOfWeek::Thu: return "thursday";
	case enDayOfWeek::Fri: return "friday";
	default: return "Not a valid day";
	}
}

// ==========================================================
// Problem 45: Month lookup (Enums)
// ==========================================================

enum enMonthOfYear {
	Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5, Jun = 6,
	Jul = 7, Aug = 8, sep = 9, Oct = 10, Nov = 11, Dec = 12
};

enMonthOfYear ReadMonthOfYear()
{
	return (enMonthOfYear)ReadNumberInRange("Please enter a month [1-12] :", 1, 12);
}

string GetMonthOfYear(enMonthOfYear Month)
{
	switch (Month)
	{
	case enMonthOfYear::Jan: return "January";
	case enMonthOfYear::Feb: return "February";
	case enMonthOfYear::Mar: return "March";
	case enMonthOfYear::Apr: return "April";
	case enMonthOfYear::May: return "May";
	case enMonthOfYear::Jun: return "June";
	case enMonthOfYear::Jul: return "July";
	case enMonthOfYear::Aug: return "August";
	case enMonthOfYear::sep: return "September";
	case enMonthOfYear::Oct: return "October";
	case enMonthOfYear::Nov: return "November";
	case enMonthOfYear::Dec: return "December";
	default: return "Not a valid Month";
	}
}

// ==========================================================
// دالة الـ Main لربط كل الحلول
// ==========================================================

int main()
{
	// --- حل المسألة 41 ---
	cout << "--- [Problem 41] ---" << endl;
	float NumberOfHours = ReadPositiveNumber("please enter Number of Hours ?");
	float NumberOfDays = HoursToDays(NumberOfHours);
	float NumberOfWeeks = DaysToWeeks(NumberOfDays); 

	cout << "TotalHours = " << NumberOfHours << endl;
	cout << "TotalDays = " << NumberOfDays << endl;
	cout << "TotalWeeks = " << NumberOfWeeks << endl;

	// --- حل المسألة 42 ---
	cout << "\n--- [Problem 42] ---" << endl;
	cout << "TaskDurationInSeconds: " << TaskDurationInSeconds(ReadTaskDuration()) << endl;

	// --- حل المسألة 43 ---
	cout << "\n--- [Problem 43] ---" << endl;
	int TotalSeconds = (int)ReadPositiveNumber("please enter total seconds ?");
	PrintTaskDurationDetails(SecondsToTaskDuration(TotalSeconds));

// --- حل المسألة 44 ---
cout << "\n--- [Problem 44] ---" << endl;
cout << "Result: " << GetDayOfWeek(ReadDayOfWeek()) << endl;

// --- حل المسألة 45 ---
cout << "\n--- [Problem 45] ---" << endl;
cout << "Result: " << GetMonthOfYear(ReadMonthOfYear()) << endl;
	return 0;
}
