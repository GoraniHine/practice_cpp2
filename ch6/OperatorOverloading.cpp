#include <iostream>
#include "time.h"

using namespace std;

int main()
{
	// ex) * : �ּҿ� ����Ǹ� �ּҿ� ����� ���� ����, �� �� ���̿� ���Ǹ� �� ���� ���� ����

	Time day1(1, 40);
	Time day2(2, 30);

	day1.show();
	day2.show();

	Time total;
	total = day1.operator+(day2); // operator+
	// -, x, /, % ���� �ִ�
	total.show();

	Time total2;
	total2 = day1 + day2; // ������ ���۷�����
	total2.show();

	return 0;
}