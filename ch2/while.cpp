#include <iostream>

using namespace std;

int main(void)
{
	// while��, do while��
	// for���� ī���Ͱ��� �ݺ��� ������ �ʱ�ȭ ����, ��� �ݺ��ϴ����� �� �� �ִ�.

	string str = "Panda";
	bool a = true;
	bool b = false;
	int i = 0;
	int j = 0;

	for (int i = 0; i < 3; i++)
	{
		cout << "�ݺ��� �� �ȿ��� ����� i";
	}

	while (b) // ������ �����̶� ����X
	{
		cout << "hello\n";
	}

	while (str[i] != '\0') // true or false -> bool �� ������
	{
		cout << str[i] << endl;
		i++;
	}

	do {
		cout << "while���Դϴ�.\n" << endl;
		j++;
	} while (j < 3 && j != 0);

	return 0;
}
