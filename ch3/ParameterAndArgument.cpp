#include <iostream>

using namespace std;

void helloCPP(int, int); // (int, int) -> 파라미터

int main(void)
{
	int times1, times2;
	cout << "정수를 입력하십시오.\n";
	cin >> times1;
	cout << "정수를 입력하십시오.\n";
	cin >> times2;

	helloCPP(times1, times2); // -> 전달인자 or argument
	// 전달해주는 값은 반드시 데이터형이 같아야 한다.

	return 0;
}

void helloCPP(int n, int m) // 전달인자에서 순서대로 1:1 대응
{
	for (int i = 0; i < n; i++)
	{
		cout << "Hello \n";
	}

	for (int i = 0; i < m; i++)
	{
		cout << "C++!\n";
	}
}