// times1.cpp
// converts from time24 to time12 using operator in time24
#include <iostream>
#include <string>
using namespace std;
////////////////////////////////////////////////////////////////
class time12
{
private:
    bool pm;
    int hrs;
    int mins;

public:
    time12() : pm(true), hrs(0), mins(0)
    {
    }
    time12(bool ap, int h, int m) : pm(ap), hrs(h), mins(m)
    {
    }
    void display() const // format: 11:59 p.m.
    {
        cout << hrs << ':';
        if (mins < 10)
            cout << '0'; // extra zero for "01"
        cout << mins << ' ';
        string am_pm = pm ? "p.m." : "a.m.";
        cout << am_pm;
    }
};
////////////////////////////////////////////////////////////////
class time24
{
private:
    int hours;
    int minutes;
    int seconds;
    // 0 to 23
    // 0 to 59
    // 0 to 59
    // no-arg constructor
public:
    time24() : hours(0), minutes(0), seconds(0)
    {
    }
    time24(int h, int m, int s) : // 3-arg constructor
                                  hours(h), minutes(m), seconds(s)
    {
    }
    void display() const // format: 23:15:01
    {
        if (hours < 10)
            cout << '0';
        cout << hours << ':';
        if (minutes < 10)
            cout << '0';
        cout << minutes << ':';
        if (seconds < 10)
            cout << '0';
        cout << seconds;
    }
    operator time12() const; // conversion operator
};
//--------------------------------------------------------------
time24::operator time12() const // conversion operator
{
    int hrs24 = hours;
    bool pm = hours < 12 ? false : true; // find am/pm
                                        // round secs
    int roundMins = seconds < 30 ? minutes : minutes + 1;
    if (roundMins == 60) // carry mins?
    {
        roundMins = 0;
        ++hrs24;
        if (hrs24 == 12 || hrs24 == 24)       // carry hrs?
            pm = (pm == true) ? false : true; // toggle am/pm
    }
    int hrs12 = (hrs24 < 13) ? hrs24 : hrs24 - 12;
    if (hrs12 == 0) // 00 is 12 a.m.
    {
        hrs12 = 12;
        pm = false;
    }
    return time12(pm, hrs12, roundMins);
}
////////////////////////////////////////////////////////////////
int main()
{
    int h, m, s;
    while (true)
    { // get 24-hr time from user
        cout << "Enter 24 - hour time : \n";
        cout << " Hours(0 to 23) : ";
        cin >> h;
        if (h > 23)
            return (1);
        // quit if hours > 23
        cout << " Minutes : ";
        cin >> m;
        cout << " Seconds : ";
        cin >> s;
        time24 t24(h, m, s);
        cout << "You entered : ";
        t24.display();
        time12 t12 = t24;
        cout << "\n12 - hour time : ";
        t12.display();
        cout << "\n\n";
    }
    return 0;
}