#include <iostream>

using namespace std;

int main(void)
{
	// char : ���� ������

	int a = 77;
	char b = a;

	cout << b << endl;

	char c = 'a';
	// null ���� '\0'
	// "" >> ��������� null���ڰ� ���� -> string
	// "a" -> a\0

	cout << c << endl;

	char d[] = { 'a', 'b', 'c' };

	cout << d << endl; // null ���� ��� �̻��Ѱ� ����

	// bool : 0(false) Ȥ�� 1(true)
	bool e = 0;
	bool f = 1;
	bool g = 10; // 0 �̿��� ��� ���� 1��

	cout << e << " " << f << " " << g << endl;
 
	return 0;
}