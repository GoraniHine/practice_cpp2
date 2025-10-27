#include <iostream>

using namespace std;

int main(void)
{
	// while문, do while문
	// for문은 카운터값은 반복문 내에서 초기화 가능, 몇번 반복하는지도 알 수 있다.

	string str = "Panda";
	bool a = true;
	bool b = false;
	int i = 0;
	int j = 0;

	for (int i = 0; i < 3; i++)
	{
		cout << "반복문 블럭 안에서 사용한 i";
	}

	while (b) // 조건이 거짓이라 실행X
	{
		cout << "hello\n";
	}

	while (str[i] != '\0') // true or false -> bool 형 데이터
	{
		cout << str[i] << endl;
		i++;
	}

	do {
		cout << "while문입니다.\n" << endl;
		j++;
	} while (j < 3 && j != 0);

	return 0;
}
