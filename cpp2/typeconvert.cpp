#include <iostream>

using namespace std;

int main(void)
{
	// �������� ��ȯ
	/*
	1. Ư�� ���������� ������ �ٸ� ���������� ���� �������� ��
	2. ���Ŀ� ���������� ȥ���Ͽ� ������� ��
	3. �Լ��� �Ű������� ������ ��
	*/

	int a = 3.141592;

	cout << a << endl;

	// ���������� �������� ��ȯ
	// typeName(a) (typeName)a

	char ch = 'M';
	cout << (int)ch << " " << int(ch) << endl;

	// C++
	// static_cast<typeName> ��������ȯ

	cout << static_cast<int>(ch) << endl;

	return 0;
}