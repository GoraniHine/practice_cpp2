#include <iostream>

using namespace std;

int main(void)
{
	//C++���� ���ڿ��� �ٷ�� ��� �� �ϳ��� string
	/*
	C��Ÿ�Ϸ� string ��ü�� �ʱ�ȭ�� �� �ִ�.
	cin�� ����Ͽ� string ��ü�� Ű���� �Է��� ������ �� �ִ�.
	cout�� ����Ͽ� string ��ü�� ���÷����� �� �ִ�.
	�迭 ǥ�⸦ ����Ͽ� string ��ü�� ����Ǿ� �ִ� �������� ���ڵ鿡 ������ �� �ִ�.
	
	�迭�� �ٸ� �迭�� ��°�� ������ �� ����.
	>> stirng ������ �̰��� �����ϴ�!
	*/

	char char1[20];
	char char2[20] = "Choi";
	string str1;
	string str2 = "mins";
	// char1 = char2; // Ʋ����
	str1 = str2;

	cout << str1 << endl;
	cout << str1[0] << endl;

	return 0;
}