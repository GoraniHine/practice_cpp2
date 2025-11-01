#include <iostream>
#include "time.h"

using namespace std;

int main()
{
	// C++ friend
	// 이항 연산자 : 두 개의 피연산자를 요구하는 연산자
	// operator *

	Time a, b;
	// a = b * 3;
	// a = b.operator*(3)

	Time t1(1, 20);
	Time t2;

	t2 = 3 * t1;
	// t2 = t1 * 3 -> 지금 같은 경우에는 매개변수의 순서가 틀려 불가능 -> 오버로딩 혹은 프렌드 사용
	// t2 = operator*(3)
	t2.show();

	return 0;
}