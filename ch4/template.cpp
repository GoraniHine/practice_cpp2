#include <iostream>

using namespace std;

// class Ȥ�� typeName
template <class Any>
Any sum(Any, Any);

template <class Any2>
Any2 sum2(int, Any2);

int main()
{
	// �Լ� ���ø�
	// ��ü���� ���������� ������ �� �ִ� �Ϲ������� �Լ��� ����

	int a = 3;
	int b = 4;
	cout << sum(a, b) << endl; // -> int, int

	float c = 3.14;
	float d = 1.592;
	cout << sum(c, d) << endl; // -> float, float

	cout << sum2(a, b) << endl;
	cout << sum2(a, c) << endl;

	return 0;
}

template <class Any>
Any sum(Any a, Any b)
{
	return a + b;
}

template <class Any2>
Any2 sum2(int a, Any2 b)
{
	return a + b;
}