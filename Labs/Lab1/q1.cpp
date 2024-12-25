#include<iostream>
using namespace std;
int main()
{
	const int minuteToDegree = 60;
	const int secondToMinute = 60;
    int degrees;
    int minutes;
    int seconds;
    int result;
    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degrees: ";
    cin >> degrees;
    cout << "Next, enter the minutes or arc: ";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;
    result = degrees + (minutes / minuteToDegree) + ((seconds / secondToMinute) / minuteToDegree);
    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << result << " degrees\n";
    return 0;
    system("pause");
} 