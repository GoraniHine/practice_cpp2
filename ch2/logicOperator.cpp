#include <iostream>

using namespace std;

int main(void)
{
	// �� ǥ����
	// ����, ����, ������ ������

	// ���� || -> OR
	// ���� && -> AND
	// ������ ! -> NOT

	cout << "����� ���̸� �Է��Ͻʽÿ�." << endl;
	int age;
	cin >> age;

	if (age < 0 || age > 100)
	{
		cout << "������ �Ͻø� �ȵ˴ϴ�!\n";
	}
	else if (20 <= age && age <= 29)
	{
		cout << "����� 20�� �̽ñ���?\n";
	}
	else
	{
		cout << "����� ���̸� �� �𸣰ڽ��ϴ�.\n";
	}

	return 0;
}