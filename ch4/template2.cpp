#include <iostream>

using namespace std;

// �Ϲ�ȭ ���α׷��ֿ� ��ü���� �� �߿��� Ư¡ �� �ϳ� -> template
// class Ȥ�� typeName
template <class Any> // ���ø�
Any sum(Any, Any);
template <class Any> // �����ε�
Any sum(int, Any);

int main()
{
	// �Լ� ���ø�
	// ��ü���� ���������� ������ �� �ִ� �Ϲ������� �Լ��� ����

	int a = 3;
	int b = 4;
	// cout << sum(a, b) << endl; // �̹����� �����ε��� 2�� �̻��� �Լ��� ���� �Ǳ⿡ �ּ�ó��

	float c = 3.14;
	float d = 1.592;
	cout << sum(c, d) << endl; // -> float, float

	cout << sum(a, c) << endl; // -> int, float

	return 0;
}

template <class Any>
Any sum(Any a, Any b)
{
	return a + b;
}

template <class Any>
Any sum(int a, Any b)
{
	return a + b;
}

