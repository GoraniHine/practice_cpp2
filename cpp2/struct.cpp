#include <iostream>

using namespace std;

int main(void)
{
	// 구조체 : 다른 데이터형이 허용되는 데이터의 집합
	// cf) 배열: 같은 데이터형의 집합

	// 축구선수
	struct SoccerPlayer
	{
		string name; // 하나의 멤버
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