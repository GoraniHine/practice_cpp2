#include <iostream>

using namespace std;

const int SIZE = 30;

int main(void)
{
	int i = 0;
	int spaces = 0;

	cout << "������ �Է��Ͻʽÿ�.\n";
	
	char line[SIZE];
	cin.get(line, SIZE);

	cout << " �Է��Ͻ� ������ \n";

	for (int i = 0; line[i] != '\0'; i++)
	{
		cout << line[i];

		if (line[i] != ' ')
		{
			continue;
		}

		spaces++;
	}

	cout << "�Դϴ�.\n";
	cout << "�Է��Ͻ� ���忡�� ������ ������ ���� ���� " << spaces << "�� �Դϴ�.\n";

	while (true)
	{
		cout << "i�� ���� " << i << " �Դϴ�." << endl;

		if (i > 10)
		{
			break; // �ݺ��� Ż��
		}
		i++;
	}

	cout << "�ݺ����� �������ϴ�. \n";

	return 0;
}