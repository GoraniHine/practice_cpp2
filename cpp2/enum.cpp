#include <iostream>

using namespace std;

int main(void)
{
	// ����ü(enum)
	// ��ȣ ����� ����� �Ϳ� ���� �� �ٸ� ���.

	enum spectrum {
		red = 0, orange, yellow, green, blue, violet, indigo, ultraviolet
	};
	// �����ڵ��� �ʱ�ȭ �Ҷ��� �ݵ�� ���������ϰ�, �ʱ�ȭ���� ���� �����ڵ��� �� ������ ������ 1�� ���� ���� �ȴ�.

	/*
	1. spectrum�� ���ο� �������� �̸����� ����ϴ�.
	2. red, orange, yellow.. 0�������� 7���� ���� ���� ���� ��Ÿ���� ��ȣ ����� ����ϴ�.
	*/

	// �����ڵ鰣�� ��������� �������� ����
	spectrum a = orange;
	cout << a << endl;

	int b;
	b = blue;
	b = blue + 3;

	cout << b << endl;

	return 0;
}