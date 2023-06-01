#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    int operator-(const Date& other) {
        int totalDays = 0;
        totalDays += (year - other.year) * 365;
        totalDays += (month - other.month) * 30;
        totalDays += (day - other.day);
        return totalDays;
    }

    Date operator+(int days) {
        int d = day + days;
        int m = month;
        int y = year;

        while (d > 30) {
            d -= 30;
            m++;
            if (m > 12) {
                m = 1;
                y++;
            }
        }

        return Date(d, m, y);
    }
};

int main() {
    Date date1(10, 5, 2021);
    Date date2(1, 1, 2021);

    int diff = date1 - date2;
    std::cout << "Difference in days: " << diff << std::endl;

    Date increasedDate = date1 + 15;
    std::cout << "Increased date: " << increasedDate.getDay() << "/"
        << increasedDate.getMonth() << "/" << increasedDate.getYear() << std::endl;

    return 0;
}