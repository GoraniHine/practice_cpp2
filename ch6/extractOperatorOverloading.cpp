#include <iostream> // ���� �Ǿ��ִ� ��ü�� �����
#include "time.h"

using namespace std;

int main()
{
	// << ������ �����ε�
	// time ��ü�� ù��° �ǿ����ڰ� �Ǿ� �ϱ⿡ friend�� ���ؼ� �����ε� ����

	Time t1(3, 45);

	t1.show();

	cout << t1; 

	return 0;
}