#include <iostream>
#include "time.h"

using namespace std;

int main()
{
	// C++ friend
	// ���� ������ : �� ���� �ǿ����ڸ� �䱸�ϴ� ������
	// operator *

	Time a, b;
	// a = b * 3;
	// a = b.operator*(3)

	Time t1(1, 20);
	Time t2;

	t2 = 3 * t1;
	// t2 = t1 * 3 -> ���� ���� ��쿡�� �Ű������� ������ Ʋ�� �Ұ��� -> �����ε� Ȥ�� ������ ���
	// t2 = operator*(3)
	t2.show();

	return 0;
}