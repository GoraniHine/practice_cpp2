#include <iostream>

using namespace std;

const int SIZE = 30;

int main(void)
{
	int i = 0;
	int spaces = 0;

	cout << "문장을 입력하십시오.\n";
	
	char line[SIZE];
	cin.get(line, SIZE);

	cout << " 입력하신 문장은 \n";

	for (int i = 0; line[i] != '\0'; i++)
	{
		cout << line[i];

		if (line[i] != ' ')
		{
			continue;
		}

		spaces++;
	}

	cout << "입니다.\n";
	cout << "입력하신 문장에서 공백을 제외한 문자 수는 " << spaces << "개 입니다.\n";

	while (true)
	{
		cout << "i의 값은 " << i << " 입니다." << endl;

		if (i > 10)
		{
			break; // 반복문 탈출
		}
		i++;
	}

	cout << "반복문이 끝났습니다. \n";

	return 0;
}