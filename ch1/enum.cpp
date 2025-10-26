#include <iostream>

using namespace std;

int main(void)
{
	// 열거체(enum)
	// 기호 상수를 만드는 것에 대한 또 다른 방법.

	enum spectrum {
		red = 0, orange, yellow, green, blue, violet, indigo, ultraviolet
	};
	// 열거자들을 초기화 할때는 반드시 정수여야하고, 초기화하지 않은 열거자들은 그 이전의 값보다 1씩 더한 값이 된다.

	/*
	1. spectrum을 새로운 데이터형 이름으로 만듭니다.
	2. red, orange, yellow.. 0에서부터 7까지 정수 값을 각각 나타내는 기호 상수로 만듭니다.
	*/

	// 열거자들간의 산술연산은 지원하지 않음
	spectrum a = orange;
	cout << a << endl;

	int b;
	b = blue;
	b = blue + 3;

	cout << b << endl;

	return 0;
}