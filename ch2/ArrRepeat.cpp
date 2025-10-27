#include <iostream>

using namespace std;

int main(void)
{
	int a[10] = { 1, 3, 5, 7, 9 };

	for (int i = 0; i < 5; i++)
	{
		cout << a[i];
	}

	cout << "\n";

	for (int i : a) // :(콜론) 다음에 배열의 이름을 기입하면 배열기반 반복문을 실행할 수 있음
	{
		// 배열의 사이즈 보다 적은 수로 초기화 된다면 남은 사이즈를 전부 출력
		cout << i;
	}

	return 0;
}