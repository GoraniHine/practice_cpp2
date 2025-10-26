#include <iostream>

using namespace std;

int main(void)
{
	// 반복문

	char a[10] = { 'a', 'b', 'c', 'd', 'e' };

	for (int i = 0; i < 5; i++)
	{
		cout << i << "번째입니다" << endl;
		// 블록에서 i++ 가능
	}

	/*
	1. 반복문에 사용할 카운터의 값을 초기화. i
	2. 반복문을 진행할 것인지 '조건 검사' i < 5
	3. 반복문 몸체를 수행합니다. 블록
	4. 카운터의 값을 변화합니다. i++
	*/

	return 0;
}