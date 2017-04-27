// Time2SecondsAndSeconds2Time.cpp : Defines the entry point for the console application.
//
#include <iostream>

struct time
{
	int hours;
	int minutes;
	int seconds;

};
long time2Sec(time time1);
time sec2Time(long seconds);

int main()
{
	time time1;
	std::cout << "Please provide time in format hh:mm:ss" << std::endl;
	std::cout << "Hours: ";
	std::cin >> time1.hours;
	
	std::cout << "Minutes: ";
	std::cin >> time1.minutes;

	std::cout << "Seconds: ";
	std::cin >> time1.seconds;

	std::cout << "Time confirmation: " << std::endl;
	std::cout << time1.hours << ":" << time1.minutes << ":" << time1.seconds << std::endl;

	long totalSeconds = time2Sec(time1);
	std::cout << totalSeconds << std::endl;
	std::cout << sec2Time(totalSeconds).hours << ":" << sec2Time(totalSeconds).minutes << ":" << sec2Time(totalSeconds).seconds << std::endl;



	system("pause");
	return 0;
}
long time2Sec(time time1)
{
	long hours2Sec = time1.hours * 3600;
	long minutes2Sec = time1.minutes * 60;
	long totalSeconds = hours2Sec + minutes2Sec + time1.seconds;
	return totalSeconds;
}
time sec2Time(long seconds)
{
	struct time t1;
	t1.hours = seconds / 3600;
	t1.minutes = (seconds - (t1.hours * 3600))/60;
	t1.seconds = (seconds - (t1.hours * 3600) + (seconds - (t1.minutes * 60)))-seconds;
	return t1;
}