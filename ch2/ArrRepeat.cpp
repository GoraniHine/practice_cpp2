#include <iostream>

using namespace std;

int main(void)
{
	int a[10] = { 1, 3, 5, 7, 9 };

	for (int i = 0; i < 5; i++)
	{
		cout << a[i];
	}

	cout << "\n";

	for (int i : a) // :(�ݷ�) ������ �迭�� �̸��� �����ϸ� �迭��� �ݺ����� ������ �� ����
	{
		// �迭�� ������ ���� ���� ���� �ʱ�ȭ �ȴٸ� ���� ����� ���� ���
		cout << i;
	}

	return 0;
}