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
	friend Time operator*(int n, Time& t) // ����Լ��� �ƴ����� private�� ���� ����
	{
		return t * 3;
	}
	friend std::ostream& operator<<(std::ostream&, Time&);
};

/* �������̽�(interface)
Ư�� ����� ������ ���� ����� �߻� ����

���� �ǹ�:
���� ���� �Լ����� ���� Ŭ����

���� �ǹ�:
������ ���α׷��� ��� © ���ΰ��� ���� ���
*/