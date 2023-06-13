#include <iostream>
using namespace std;

struct Time
{
    int hours;
    int minutes;
    int seconds;
};

bool checkTimeFormat(Time time)
{
    return (
        (time.hours < 0 || time.hours > 24) ||
        (time.minutes < 0 || time.minutes > 60) ||
        (time.seconds < 0 || time.seconds > 60)
    );
}

Time findTimeDelta(Time startTime, Time endTime)
{
    Time timeDelta;
    if (startTime.seconds > endTime.seconds)
    {
        endTime.seconds += 60;
        --endTime.minutes;
    }
    if (startTime.minutes > endTime.minutes)
    {
        endTime.minutes += 60;
        --endTime.hours;
    }
    timeDelta.seconds = endTime.seconds - startTime.seconds;
    timeDelta.minutes = endTime.minutes - startTime.minutes;
    timeDelta.hours = endTime.hours - startTime.hours;
    return timeDelta;
}

int main()
{
    Time startTime;
    cout << "Enter start time [hh mm ss]:" << endl;
    cin >> startTime.hours >> startTime.minutes >> startTime.seconds;

    if (checkTimeFormat(startTime))
    {
        cout << "Invalid Start Time" << endl;
        return 0;                
    }

    Time endTime;
    cout << "Enter end time [hh mm ss]:" << endl;
    cin >> endTime.hours >> endTime.minutes >> endTime.seconds; 

    if (checkTimeFormat(endTime))
    {
        cout << "Invalid End Time" << endl;
        return 0;
    }
    
    Time timeDelta = findTimeDelta(startTime, endTime);
    if (timeDelta.hours < 0)
    {
        cout << "Invalid End Time" << endl;
        return 0;
    }
    cout 
        << "TIME TAKEN: " 
        << timeDelta.hours 
        << ":" 
        << timeDelta.minutes
        << ":"
        << timeDelta.seconds
        << endl;
    return 0;
}