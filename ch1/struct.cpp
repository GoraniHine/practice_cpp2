#include <iostream>

using namespace std;

int main(void)
{
	// ����ü : �ٸ� ���������� ���Ǵ� �������� ����
	// cf) �迭: ���� ���������� ����

	// �౸����
	struct SoccerPlayer
	{
		string name; // �ϳ��� ���
		string position;
		int height;
		int weight;
	};

	SoccerPlayer A;
	A.name = "Son";
	A.position = "Striker";
	A.height = 183;
	A.weight = 77;

	SoccerPlayer B{
		"MIN",
		"Striker",
		170,
		65
	};

	cout << A.name << endl;
	cout << A.position << endl;
	cout << A.height << endl;
	cout << A.weight << endl << endl;

	cout << B.name << endl;
	cout << B.position << endl;
	cout << B.height << endl;
	cout << B.weight << endl << endl;

	SoccerPlayer C[2] = {
		{"A", "A", 1, 1},
		{"B", "B", 2, 2}
	};

	cout << C[0].name << endl;
	cout << C[0].position << endl;
	cout << C[0].height << endl;
	cout << C[0].weight << endl << endl;

	cout << C[1].name << endl;
	cout << C[1].position << endl;
	cout << C[1].height << endl;
	cout << C[1].weight << endl;

	return 0;
}