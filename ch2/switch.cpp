#include <iostream>

using namespace std;

int main(void)
{
	int a;
	cin >> a;

	switch (a) // boolean���� �ƴ϶� ���������� �Ǵ�
	{
	case 1:
		cout << "�Է��Ͻ� ���� 1�Դϴ�.\n";
		break;

	case 2:
		cout << "�Է��Ͻ� ���� 2�Դϴ�.\n";
		break;

	case 3:
		cout << "�Է��Ͻ� ���� 3�Դϴ�.\n";
		break;

	default:
		cout << "�Է��Ͻ� ���� 1, 2, 3 �̿��� �ٸ� ���Դϴ�.\n";
		break;
	}

	cout << "switch ������ �������ϴ�.\n";

	return 0;
}