#include <iostream>
#include <cmath>

struct Time {
    int hour, minute;
    double second;

    void print()
    {
        std::cout << "Time: " << hour << ":" << minute << ":" << second << std::endl;
    }

    void increment(double secs)
    {
        second += secs;
        minute += static_cast<int>(second / 60.0);
        second = std::fmod(second, 60.0);
        hour += minute / 60;
        minute = minute % 60;
    }
};

int main()
{
    Time current_time = {9, 14, 30.0};
    current_time.increment(500.0);
    current_time.print();

    return 0;
}
