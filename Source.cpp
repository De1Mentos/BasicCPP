#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;
public:
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }
    int operator-(const Date& other) const 
    {
        int days = 0;
        days += (year - other.year) * 365;
        days += (month - other.month) * 30;
        days += (day - other.day);
        return days;
    }
    Date operator+(int numDays) const {
        Date newDate(day, month, year);
        newDate.day += numDays;
        while (newDate.day > 30) {
            newDate.month += 1;
            newDate.day -= 30;
            if (newDate.month > 12) {
                newDate.year += 1;
                newDate.month = 1;
            }
        }
        return newDate;
    }
    int getDay() const {
        return day;
    }
    int getMonth() const {
        return month;
    }
    int getYear() const {
        return year;
    }
};

int main() 
{
    Date d1(1, 1, 2020);
    Date d2(1, 2, 2020);
    int diff = d2 - d1;
    cout << "Difference in days: " << diff << endl;
    Date d3 = d1 + 10;
    cout << "New date: " << d3.getDay() << "/" << d3.getMonth() << "/" << d3.getYear() << endl;
    return 0;
}