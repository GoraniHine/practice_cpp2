#include "time2.h"

Time::Time()
{
	hours = mins = 0;
}

Time::Time(int h, int m)
{
	hours = h;
	mins = m;
}

void Time::addHours(int h)
{
	hours += h;
}

void Time::addMins(int m)
{
	mins += m;
	hours += mins / 60;
	mins %= 60;
}

Time Time::operator+(Time& t)
{
	Time sum;
	sum.mins = mins + t.mins;
	sum.hours = hours + t.hours;
	sum.hours += sum.mins / 60;
	sum.mins %= 60;
	return sum;
}

void Time::show()
{
	std::cout << "시간: " << hours << endl;
	std::cout << "분: " << mins << endl;
}

Time::~Time()
{

}

Time Time::operator*(int n)
{
	Time result;
	long resultMin = hours * n * 60 + mins * n;
	result.hours = resultMin / 60;
	result.mins = resultMin % 60;
	return result;
}

/*
Time operator*(int n, Time& t)
{
	Time result;
	long resultMin = t.hours * n * 60 + t.mins * n;
	result.hours = resultMin / 60;
	result.mins = resultMin % 60;
	return result;
}
*/

std::ostream& operator<<(std::ostream& os, Time& t)
{
	os << t.hours << "시간 " << t.mins << "분";
	return os;
}

NewTime::NewTime() : Time() // NewTime을 호출하게 된다면 Time()의 객체가 생성되고 난후 NewTime 객체에 전달하게 됨
{
	day = 0;
}

NewTime::NewTime(int h, int m, int d) : Time(h, m) // h가 Time(h, m)의 h로 m이 Time(h, m)의 m으로.
{
	day = d;
}

/*
void NewTime::print() // show()와 같은 동작
{
	cout << "일: " << day << endl;
	show();
}
*/

void NewTime::show() // show()와 같은 동작이기에 오버라이딩
{
	cout << "일: " << day << endl;
	cout << "시간: " << getHours() << endl;
	cout << "분: " << getmins() << endl;
}