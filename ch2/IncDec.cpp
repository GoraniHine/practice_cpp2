#include <iostream>

using namespace std;

int main(void)
{

	char a[10] = { 'a', 'b', 'c', 'd', 'e' };

	for (int i = 0; i < 5; i++)
	{
		cout << i << "��°�Դϴ�" << endl;
	}

	int b = 10;
	int c = 10;

	cout << "b�� " << b << ",c�� " << b << endl;
	cout << "b++�� " << b++ << endl;
	cout << "++c�� " << ++c << endl;
	cout << "b�� " << b << ",c�� " << b << endl;

	char d[10] = { 'a', 'b', 'c', 'd', 'e' };

	for (int i = 5; i > 0; i--)
	{
		cout << i << "��°�Դϴ�" << endl;
	}

	/* ���� ǥ����
	< : �۴�
	<= : �۰ų� ����
	> : ũ��
	>= : ũ�ų� ����
	== : ���װ� ������ ����
	!= : ���� �ʴ�
	*/
	
	return 0;
}