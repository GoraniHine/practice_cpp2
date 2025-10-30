#include <iostream>

using namespace std;

void swapA(int&, int&);
void swapB(int*, int*);
void swapC(int, int);

int main(void)
{
	// ����(reference)��?
	// �̸� ���ǵ� ������ ���� �̸� ��� ����� �� �ִ� ��� �̸�
	// �Լ��� �Ű������� ���

	// int a;
	// int& b = a; &�� �ּ� �����ڿ� ���ÿ� ���� ������
	// int&�� int�� ���� ������ �ǹ�

	int wallet1 = 100;
	int wallet2 = 200;

	cout << "���� ����" << endl;
	cout << "wallet1 = " << wallet1 << ", wallet 2 = " << wallet2 << endl;

	cout << "������ �̿��� ���� ��ȯ\n";
	swapA(wallet1, wallet2);
	cout << "���� ��ȯ ���� ����\n";
	cout << "wallet1 = " << wallet1 << ", wallet 2 = " << wallet2 << endl;

	cout << "�����͸� �̿��� ���� ��ȯ\n";
	swapB(&wallet1, &wallet2);
	cout << "�����͸� �̿��� ��ȯ ���� ����\n";
	cout << "wallet1 = " << wallet1 << ", wallet 2 = " << wallet2 << endl;

	cout << "���� �̿��� ���� ��ȯ\n";
	swapC(wallet1, wallet2);
	cout << "���� �̿��� ��ȯ ���� ����\n";
	cout << "wallet1 = " << wallet1 << ", wallet 2 = " << wallet2 << endl;

	return 0;
}

// ������ �����ϴ� ��� -> �������� �۾�
void swapA(int& a, int& b)
{
	int temp;
	
	temp = a;
	a = b;
	b = temp;
}

// ������ �������ϴ� ���
void swapB(int* a, int* b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// ������ ���ϴ� ��� -> ���纻���� �۾�
void swapC(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}