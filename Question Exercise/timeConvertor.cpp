#include <iostream>

using namespace std;

class TimeConverter
{
public:
   
    void secondsToHMS(int totalSeconds)
    {
        int hours = totalSeconds / 3600;
        int minutes = (totalSeconds % 3600) / 60;
        int seconds = totalSeconds % 60;

        cout << "HH:MM:SS => " << hours << ":" << minutes << ":" << seconds << endl;
    }

    // Convert HH:MM:SS to seconds
    int hmsToSeconds(int hours, int minutes, int seconds)
    {
        return (hours * 3600) + (minutes * 60) + seconds;
    }
};

int main()
{
    TimeConverter tc;
    int choice;

    while (true)
    {
        cout << "Time Converter Menu" << endl;
        cout << "1. Convert seconds to HH:MM:SS" << endl;
        cout << "2. Convert HH:MM:SS to seconds" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int totalSeconds;
            cout << "Enter total seconds: ";
            cin >> totalSeconds;
            tc.secondsToHMS(totalSeconds);
            break;
        }
        case 2:
        {
            int hours, minutes, seconds;
            cout << "Enter hours: ";
            cin >> hours;
            cout << "Enter minutes: ";
            cin >> minutes;
            cout << "Enter seconds: ";
            cin >> seconds;
            int totalSeconds = tc.hmsToSeconds(hours, minutes, seconds);
            cout << "Total seconds: " << totalSeconds << endl;
            break;
        }
        case 3:
            cout << "Exiting program." << endl;
            return 0;
        default:
            cout << "Invalid choice. Please enter 1, 2, or 3." << endl;
            break;
        }
    }
}
