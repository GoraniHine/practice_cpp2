#include <iostream>
#include "time.h"

using namespace std;

int main()
{
	// ex) * : 주소에 적용되면 주소에 저장된 값을 산출, 두 값 사이에 사용되면 두 값의 곱을 산출

	Time day1(1, 40);
	Time day2(2, 30);

	day1.show();
	day2.show();

	Time total;
	total = day1.operator+(day2); // operator+
	// -, x, /, % 등이 있다
	total.show();

	Time total2;
	total2 = day1 + day2; // 연산자 오퍼레이터
	total2.show();

	return 0;
}