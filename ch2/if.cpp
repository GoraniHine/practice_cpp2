#include <iostream>

using namespace std;

int main(void)
{
	// �б� ���� : if ����
	
	if (true)
	{
		cout << "������ ";
		cout << "���Դϴ�." << endl;

	}

	if (false)
	{
		cout << "������ �����Դϴ�." << endl;
	}

	if (false)
	{
		cout << "#1" << endl;
	}
	else
	{
		if (true)
		{
			cout << "#2" << endl;;
		}
		else
		{
			cout << "#3" << endl;;
		}
	}

	if (false) // ���� ����. c++������ else �ȿ� if�� ������ �߰�ȣ�� ��ŵ�Ҽ� �ִ�
	{
		cout << "#1" << endl;
	}
	else if (true)
	{
		cout << "#2" << endl;;
	}
	else
	{
		cout << "#3" << endl;;
	}


	cout << "���α׷��� ����Ǿ����ϴ�.";

	return 0;
}