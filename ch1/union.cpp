#include <iostream>

using namespace std;

int main(void)
{
	// ����ü(union)
	// ���� �ٸ� ���������� �� ���� �� ������ ������ �� ����.
	// ���� : �޸𸮸� ���� ����

	union MyUnion
	{
		int intVal;
		long longVal;
		float floatVal;
	};

	MyUnion test;
	test.intVal = 3;
	cout << test.intVal << endl;

	test.longVal = 33;
	cout << test.intVal << endl;
	cout << test.longVal << endl;

	test.floatVal = 3.3;
	cout << test.intVal << endl;
	cout << test.longVal << endl;
	cout << test.floatVal << endl;

	return 0;
}