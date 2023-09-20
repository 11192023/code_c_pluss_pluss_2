#include <iostream>

struct MyDate {
    int year;
    int month;
    int day;

    void input_data() {
        std::cout << "Enter the year: ";
        std::cin >> year;
        std::cout << "Enter the month: ";
        std::cin >> month;
        std::cout << "Enter the day: ";
        std::cin >> day;
    }

    void out_data() {
        std::cout << "Date: " << year << "-" << month << "-" << day << std::endl;
    }

    MyDate next_date() {
        MyDate next;
        next.year = year;
        next.month = month;
        next.day = day;

        // Increase the day by 1
        next.day++;
        
        // Check if the day exceeds the maximum days in the current month
        if (next.day > get_max_days_in_month(next.month, next.year)) {
            next.day = 1;  // Reset day to 1
            next.month++;  // Increment month

            // Check if the month exceeds 12 (December), then increment the year
            if (next.month > 12) {
                next.month = 1;  // Reset month to 1 (January)
                next.year++;    // Increment year
            }
        }

        return next;
    }

    MyDate previous_date() {
        MyDate previous;
        previous.year = year;
        previous.month = month;
        previous.day = day;

        // Decrease the day by 1
        previous.day--;

        // Check if the day becomes 0
        if (previous.day == 0) {
            previous.month--;  // Decrement month

            // Check if the month becomes 0, then decrement the year
            if (previous.month == 0) {
                previous.month = 12;  // Set month to December (12)
                previous.year--;      // Decrement year
            }

            previous.day = get_max_days_in_month(previous.month, previous.year);
        }

        return previous;
    }

    // Helper function to get the maximum days in a month
    int get_max_days_in_month(int month, int year) {
        int maxDays = 31;

        // Adjust the number of days for specific months
        if (month == 2) {
            // Check if it's a leap year
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                maxDays = 29;  // February in a leap year has 29 days
            } else {
                maxDays = 28;  // February in a non-leap year has 28 days
            }
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            maxDays = 30;  // April, June, September, and November have 30 days
        }

        return maxDays;
    }
};

int main() {
    MyDate date;
    date.input_data();
    date.out_data();

    MyDate nextDate = date.next_date();
    std::cout << "Next Date: ";
    nextDate.out_data();

    MyDate previousDate = date.previous_date();
    std::cout << "Previous Date: ";
    previousDate.out_data();

    return 0;
}
