#include <iostream>

using namespace std;

void helloCPP(int, int); // (int, int) -> �Ķ����

int main(void)
{
	int times1, times2;
	cout << "������ �Է��Ͻʽÿ�.\n";
	cin >> times1;
	cout << "������ �Է��Ͻʽÿ�.\n";
	cin >> times2;

	helloCPP(times1, times2); // -> �������� or argument
	// �������ִ� ���� �ݵ�� ���������� ���ƾ� �Ѵ�.

	return 0;
}

void helloCPP(int n, int m) // �������ڿ��� ������� 1:1 ����
{
	for (int i = 0; i < n; i++)
	{
		cout << "Hello \n";
	}

	for (int i = 0; i < m; i++)
	{
		cout << "C++!\n";
	}
}