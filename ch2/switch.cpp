#include <iostream>

using namespace std;

int main(void)
{
	int a;
	cin >> a;

	switch (a) // boolean형이 아니라 정수값으로 판단
	{
	case 1:
		cout << "입력하신 값은 1입니다.\n";
		break;

	case 2:
		cout << "입력하신 값은 2입니다.\n";
		break;

	case 3:
		cout << "입력하신 값은 3입니다.\n";
		break;

	default:
		cout << "입력하신 값은 1, 2, 3 이외의 다른 값입니다.\n";
		break;
	}

	cout << "switch 구문이 끝났습니다.\n";

	return 0;
}