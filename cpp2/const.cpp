#include <iostream>
// # define PIE 3.1415926535
using namespace std;

int main(void)
{
	// 원의 넓이를 구하는 프로그램
	// 반지름 * 반지름 *파이

	int r = 3;
	float s = r * r * 3.1415926535;
	// 1.바뀔 필요가 없는 수
	// 2. 바뀌어서는 안되는 수
	// 상수

	const float PIE = 3.1415926535;

	int r2 = 3;
	float s2 = r2 * r2 * PIE; // PIE는 상수
	// PIE = 10.1 에러

	cout << s << endl;
	cout << s2 << endl;

	return 0;
}