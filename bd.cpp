#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

// Check leap year
bool isLeap(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Get days in month
int getDaysInMonth(int month, int year)
{
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeap(year))
        return 29;
    return days[month - 1];
}

// Validate date
bool isValidDate(int d, int m, int y)
{
    if (y < 1900 || m < 1 || m > 12 || d < 1)
        return false;

    if (d > getDaysInMonth(m, y))
        return false;

    return true;
}

// Convert date to total days (rough)
long long totalDays(int d, int m, int y)
{
    long long days = d;

    for (int i = 1; i < m; i++)
        days += getDaysInMonth(i, y);

    for (int i = 1900; i < y; i++)
        days += isLeap(i) ? 366 : 365;

    return days;
}

int main()
{
    int d, m, y;

    cout << "===== ADVANCED AGE CALCULATOR =====\n";

    // Input loop
    while (true)
    {
        cout << "Enter DOB (DD MM YYYY): ";
        cin >> d >> m >> y;

        if (isValidDate(d, m, y))
            break;
        else
            cout << "❌ Invalid date! Try again.\n";
    }

    // Get current time
    time_t now = time(0);
    tm *ltm = localtime(&now);

    int cd = ltm->tm_mday;
    int cm = 1 + ltm->tm_mon;
    int cy = 1900 + ltm->tm_year;

    int ch = ltm->tm_hour;
    int cmin = ltm->tm_min;
    int cs = ltm->tm_sec;

    // Copy current date
    int day = cd, month = cm, year = cy;

    // Adjust days
    if (d > day)
    {
        month--;
        if (month == 0)
        {
            month = 12;
            year--;
        }
        day += getDaysInMonth(month, year);
    }

    // Adjust months
    if (m > month)
    {
        month += 12;
        year--;
    }

    int finalDays = day - d;
    int finalMonths = month - m;
    int finalYears = year - y;

    // Total days lived
    long long birthDays = totalDays(d, m, y);
    long long currentDays = totalDays(cd, cm, cy);
    long long livedDays = currentDays - birthDays;

    // Next birthday calculation
    int nextBDYear = cy;
    if (cm > m || (cm == m && cd > d))
        nextBDYear++;

    int daysUntilBD = totalDays(d, m, nextBDYear) - currentDays;

    // Output
    cout << "\n========== RESULT ==========\n";

    cout << "Exact Age: "
         << finalYears << " Years, "
         << finalMonths << " Months, "
         << finalDays << " Days\n";

    cout << "\nTime Component:\n";
    cout << "Hours: " << finalYears * 365 * 24 + ch << endl;
    cout << "Minutes: " << (finalYears * 365 * 24 * 60 + cmin) << endl;
    cout << "Seconds: " << (finalYears * 365LL * 24 * 60 * 60 + cs) << endl;

    cout << "\nTotal Days Lived: " << livedDays << endl;

    cout << "\nDays until next birthday: " << daysUntilBD << endl;

    cout << "\nCurrent Date & Time: "
         << cd << "/" << cm << "/" << cy << " "
         << setw(2) << setfill('0') << ch << ":"
         << setw(2) << cmin << ":"
         << setw(2) << cs << endl;

    cout << "============================\n";

    return 0;
}