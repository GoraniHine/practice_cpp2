#include <iostream>

using namespace std;

void countDown(int n);

int main(void)
{
	// ���ȣ�� : c++���� �Լ��� �ڱ� �ڽ��� ȣ���� �� �ִ�.

	countDown(5);

	return 0;
}

void countDown(int n)
{
	cout << "Counting..." << n << endl;
	if (n > 0)
		countDown(n - 1);
	cout << n << "��° ����Լ�" << endl; // �������� �ڵ����
}