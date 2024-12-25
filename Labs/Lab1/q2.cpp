#include<iostream>
using namespace std;
int main()
{
	long long numberOfSeconds;
	const int hoursInDay = 24;
	const int minutesInHour = 60;
	const int secondsInMinute = 60;
	int days;
	int hours;
	int minutes;
	int seconds;
	cout << "Enter the number of seconds: ";
	cin >> numberOfSeconds;
	days = numberOfSeconds / (secondsInMinute * minutesInHour * hoursInDay);
    hours = (numberOfSeconds - days * hoursInDay * minutesInHour * secondsInMinute) / (secondsInMinute * minutesInHour);
    minutes = (numberOfSeconds - seconds) / secondsInMinute % minutesInHour;
    seconds = numberOfSeconds % secondsInMinute;
    cout << numberOfSeconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds";
    return 0;
    system("pause");
}