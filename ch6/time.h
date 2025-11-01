#ifndef TIMEH

#include <iostream>

using namespace std;

#endif // !Time

class Time
{
private:
	int hours;
	int mins;

public:
	Time();
	Time(int, int);
	void addHours(int);
	void addMins(int);
	Time operator+(Time&);
	Time operator*(int);
	void show();
	~Time();
	friend Time operator*(int n, Time& t) // 멤버함수는 아니지만 private에 접근 가능
	{
		return t * 3;
	}
	friend std::ostream& operator<<(std::ostream&, Time&);
};

/* 인터페이스(interface)
특정 기능을 구현할 것을 약속한 추상 형식

좁은 의미:
순수 가상 함수만을 갖는 클래스

넓은 의미:
앞으로 프로그램을 어떻게 짤 것인가에 대한 약속
*/