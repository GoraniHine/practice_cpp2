#include <iostream>

using namespace std;

int sum(int, int); // �Ʒ��� ����� ���� �Լ�
float sum(float, float);

int main()
{
	// �Լ��� ����
	// ���� : �پ��� ���¸� ����
	// �Լ��� �����ε�
	// �������� �Լ��� ���� �̸����� �����Ѵ�.

	/* �Լ� �����ε��� �Ұ����� ���
	1. �Լ��� �������� �ٸ� ���
	2. �Լ��� ����� ��, �ΰ� �̻��� �Լ��� �����Ǵ� ��� ex) template ����
	*/

	cout << "�� ������ �Է��Ͻʽÿ�. \n";
	int a, b;
	cin >> a >> b;
	cout << "�� ������ ���� " << sum(a, b) << "�Դϴ�.\n"; // �Ķ���ͷ� int�� 2��
	cout << "�� �Ǽ��� �Է��Ͻʽÿ�.\n";
	float c, d;
	cin >> c >> d;
	cout << "�� �Ǽ��� ���� " << sum(c, d) << "�Դϴ�.\n"; // �Ķ���ͷ� float�� 2��

	return 0;
}

int sum(int a, int b)
{
	return a + b;
}

float sum(float a, float b)
{
	return a + b;
}