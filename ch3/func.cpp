#include <iostream>

using namespace std;
const float PIE = 3.14;

void cheers(int n);
float circle(int x);

int main(void)
{
	/* �Լ��� ����Ϸ���
	1. �Լ� ���� ����
	2. �Լ� ���� ����
	3. �Լ� ȣ��
	*/

	/* c++ �Լ��� 2���� ����
	1. ���ϰ��� �ִ� Ÿ�� -> ���������� ���
	2. ���ϰ��� ���� Ÿ�� -> void�� ����
	���ϰ�: �Լ��� ������ �ǵ����ִ� ��
	*/
	int a;
	cout << "�ϳ��� ���� �Է��Ͻʽÿ�." << endl;
	cin >> a;
	cheers(a);

	int b;
	cout << "���� ������ ���̸� �Է��Ͻʽÿ�." << endl;
	cin >> b;
	float c = circle(b);
	cout << "���� ���̴� " << c << " �Դϴ�." << endl;
	return 0;
}

void cheers(int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Cheers!" << endl;
	}
}

float circle(int x)
{
	return x * x * PIE;
}