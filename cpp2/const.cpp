#include <iostream>
// # define PIE 3.1415926535
using namespace std;

int main(void)
{
	// ���� ���̸� ���ϴ� ���α׷�
	// ������ * ������ *����

	int r = 3;
	float s = r * r * 3.1415926535;
	// 1.�ٲ� �ʿ䰡 ���� ��
	// 2. �ٲ��� �ȵǴ� ��
	// ���

	const float PIE = 3.1415926535;

	int r2 = 3;
	float s2 = r2 * r2 * PIE; // PIE�� ���
	// PIE = 10.1 ����

	cout << s << endl;
	cout << s2 << endl;

	return 0;
}