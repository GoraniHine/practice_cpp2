#ifndef TIMEH

#include <iostream>

using namespace std;

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
	virtual void show(); // 가상 메서드, 가상 메서드는 프로그램에 서로 독립된 2개의 메서드 정의가 있다는것을 알려줌.
	/*
	1. 기초 클래스에서 가상메서드를 선언하면, 그 함수는 기초 클래스 및 파생되는 클래스에서 모두 가상이 된다.
	2. 객체에 대한 참조를 사용하여, 객체를 지시하는 포인터를 사용하여 가상 메서드가 호출되면 
	참조나 포인터를 위해 정의된 메서드를 사용하지 않고 객체형을 위해 정의된 메서드를 사용한다. -> 동적 결합
	3. 상속을 위해 기초 클래스로 사용할 클래스를 정의할 때,
	파생 클래스에서 다시 정의해야 되는 클래스 메서드들은 가상 함수로 선언해야 한다. ex) show()
	*/
	int getHours() { return hours; }
	int getmins() { return mins; }
	virtual ~Time(); // Time의 소멸자가 virtual이 아니면, 기반 클래스(Time)의 소멸자만 호출되고, 파생 클래스(NewTime)의 소멸자는 호출되지 않는다.
	// 가상 소멸자가 있으면, delete 시 정확한 객체의 타입(NewTime) 에 따라 소멸자가 순서대로 호출됩니다.
	friend Time operator*(int n, Time& t) // 멤버함수는 아니지만 private에 접근 가능
	{
		return t * 3;
	}
	friend std::ostream& operator<<(std::ostream&, Time&);
};

class NewTime : public Time
{
	/*
	1. 파생 클래스형의 객체 안에는 기초 클래스형의 데이터 멤버들이 저장된다.
	2. 파생 클래스형의 객체는 기초 클래스형의 메서드들을 사용할 수 있다.
	3. 파생 클래스는 자기 자신의 생성자를 필요로 한다.
	4. 파생 클래스는 부가적인 데이터 멤버들과 멤버 함수들을 임의로 추가할 수 있다.
	*/

private:
	int day;

public:
	NewTime();
	NewTime(int, int, int);
	// void print(); // show()랑 같은 동작
	void show();
};

#endif // !Time