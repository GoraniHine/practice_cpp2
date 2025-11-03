#include "time2.h"
#include <iostream>

using namespace std;

const int MAX = 3;

int main()
{
	/*
	1. 기존의 클래스에 새로운 기능을 추가할 수 있다.
	2. 클래스가 나타내고 있는 데이터에 다른 것을 더 추가할 수 있다.
	3. 클랫그 메서드가 동작하는 방식을 변경할 수 있다. -> 오버라이딩
	*/

	Time* times[MAX];
	int day;
	int hours;
	int mins;

	for (int i = 0; i < MAX; i++)
	{
		cout << i + 1 << "번째 원소를 정의합니다." << endl;
		cout << "시간을 입력하십시오." << endl;
		cin >> hours;
		cout << "분을 입력하십시오." << endl;
		cin >> mins;
		char check;
		cout << "일 정보가 있다면 1, 없다면 0을 입력하십시오." << endl;
		cin >> check;
		if (check == '0')
			times[i] = new Time(hours, mins); // new 연산자는 "객체의 주소"를 반환함
		else
		{
			cout << "일을 입력하십시오. " << endl;
			cin >> day;
			times[i] = new NewTime(hours, mins, day);
		}
	}

	for (int i = 0; i < MAX; i++)
	{
		cout << i + 1 << "번쨰 정보입니다." << endl;
		times[i]->show(); // 오버라이딩 되었기에 Time, NewTime 둘다 show()호출 가능
	}

	for (int i = 0; i < MAX; i++)
	{
		delete times[i]; // new를 사용했기에 delete 사용!
	}

	return 0;
}