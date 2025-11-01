#include <iostream> // 정의 되어있는 객체를 사용함
#include "time.h"

using namespace std;

int main()
{
	// << 연산자 오버로딩
	// time 객체가 첫번째 피연산자가 되야 하기에 friend를 통해서 오버로딩 가능

	Time t1(3, 45);

	t1.show();

	cout << t1; 

	return 0;
}